/*
 * Read some phone numbers from a file and write to sstreams
 * Check if the number is valid (11 digits will do)
 * And store in sstream objects badNums and formatted
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

bool valid(std::string);         // checks phone numbers are valid
std::string format(std::string); // puts some spaces into phone numbers

struct PersonInfo 
{
  std::string name;
  std::vector<std::string> phones;
};

int main() 
{
  std::string line, word;         // to hold input by line and word
  std::vector<PersonInfo> people; // holds entire records
  std::ifstream ifs;              // input file stream

  ifs.open("./phones.txt");       // open the file

  if (!ifs)                       // make sure a fie is there                    
    std::cerr << "No file" << std::endl;
  else 
  {  // loop over the ifstream line by line
    for ( ; std::getline(ifs, line); ) 
    {
        PersonInfo info;                 // create a PersonInfo object
        std::istringstream record(line); // bind each line of the ifs to a sstrm
        record >> info.name;             // first item in record is the name

        while (record >> word)           // read the rest of the line        
          info.phones.push_back(word);   // add other "words" as phone numbers

        people.push_back(info);          // add record to the vector (mini db)
    }
  }

  for (const auto& entry : people) 
  {
    std::ostringstream formatted, badNums;

    for (const auto& nums : entry.phones) 
    {
      if (!valid(nums)) 
        badNums << " " << nums;
      else
        formatted << " " << format(nums);
    }
    if (badNums.str().empty()) 
      std::cout << entry.name << " " << formatted.str() << std::endl;
    else {
      std::cerr << "input error: " << entry.name
                << " invalid number(s) " << badNums.str() << std::endl;
    }
  } 

  return 0;
}

/* function definitions */

bool valid(std::string phnum)          // checks phone numbers are valid
{         
  if (phnum.size() != 11) 
    return false;
   else 
    return true; 
}         

std::string format(std::string phnum)   // puts some spaces into phone numbers
{ 

  for (int i = 0; i < phnum.length(); i++) 
  {
    if (i == 5) 
        phnum.insert(i++, " ");
    if (i == 9) 
        phnum.insert(i++, " ");
  }

  return phnum;
} 