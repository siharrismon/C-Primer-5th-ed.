/*
 * A function that takes a forward_list<string> and two additional 
 * string args. Find the first string in the list and insert the second 
 * string immediately following the the first.
 * If the first string is not founsd insert the second at the end of the list
 */

#include <string>
#include <forward_list>
#include <iostream>
#include <iterator>

void insertS(std::forward_list<std::string>&, std::string, std::string);
void printFlS(std::forward_list<std::string>&);


int main()
{
  std::forward_list<std::string> sflist = {"mushrooms", "tomato", "ham", "egg"};
  

  insertS(sflist, "bacon", "chips");
  printFlS(sflist);

  return 0;
}

void insertS(std::forward_list<std::string>& sflist, 
             std::string targetS, std::string newS)
{
  std::forward_list<std::string>::iterator prev;
  // find targetS in sflist
  for (std::forward_list<std::string>::iterator n = sflist.begin();
        n != sflist.end(); n++)
  {   
      if (*n == targetS)                // insert newS after targetS
        sflist.insert_after(n, newS); 
      else
        prev = n;                       // otherwise store this index  
  }
  sflist.insert_after(prev, newS);      // and insert after previous index

  return;
}             

void printFlS(std::forward_list<std::string>& sflist)
{
  for (auto print : sflist) {
    std::cout << print << " ";
  }
  std::cout << std::endl;

  return;
}
