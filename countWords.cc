/*
 *  Word couting program, ignore case and punctuation
 * 
 */
#include <map>
#include <string>
#include <iostream>
#include <set>

int main()
{
  std::map<std::string, size_t> word_count;
  std::string word;

  while (std::cin >> word)
  {
    word.erase (std::remove_if (word.begin (), word.end (), 
                ispunct), word.end ());
    for (std::string::iterator it = word.begin(); 
          it != word.end(); it++)
    {
      *it = toupper(*it); 
       
    }
    ++word_count[word];
  }
  for (const auto& w : word_count)
  {
    std::cout << w.first << " occurrs " << w.second
              << ((w.second > 1) ? " times" : " time")
              << std::endl;
  }
}