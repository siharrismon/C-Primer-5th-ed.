/*
 *  Store each linefrom a file in a svec and use istringstream to read each
 *  element a word at a time
 */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>



int main() {

  std::vector<std::string> svec;
  std::ifstream ifs;
  std::string word;

  // open the file
  ifs.open("./stringIn.txt");
  if (!ifs) {
    std::cerr << "No file" << std::endl;
  } else {

  // store lines in vector   
    for (std::string line ; std::getline(ifs, line); ) {
        svec.push_back(line);
    }

    // use istringstream to read vector word by word
    // loop over strings in svec and attach to sstream obj
    for (std::string& s : svec) {
      std::istringstream strm(s);
      while (strm >> word) {            // read word by word and print
        std::cout << word << std::endl;
      }
    }
  }

  return 0;
}