/*
 *  Eliminate duplictes in a list
 */

#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
#include <string>

void elimDupsList(std::list<std::string>&);

int main()
{
  std::list<std::string> slist = {
    "hello",
    "hello",
    "what",
    "is",
    "this",
    "list",
    "this",
    "is"
  };

  elimDupsList(slist);

  for (auto thing : slist)
  {
    std::cout << thing << ' ';
  }
  std::cout << std::endl;

  return 0;
}

void elimDupsList(std::list<std::string>& words)
{
  words.sort();
  std::list<std::string>::iterator end_unique = std::unique(words.begin(), 
                                                              words.end());
  words.erase(end_unique, words.end());                                                            
  
}
