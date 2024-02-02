/*
 *  Word counting program using insert - HARD
 *
 *  thing.first is a bool
 *  thing->first is a value or whatever is 2nd
 * 
 */

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <numeric>


int main() {
  std::map<std::string, size_t> word_count;
  std::set<std::string> exclude = {"The", "But", "And", "Or", "An", "A",
                                   "the", "but", "and", "or", "an", "a"};
  std::string word;

  while (std::cin >> word) {
    if (exclude.find(word) == exclude.end()) {
      ++(((word_count.insert({word, 0})).first)->second);  // does what all the commented stuff
                                                     //  below does

      /*

      if (word_count.find(word) != word_count.end()) {  // if we find the word in the map
        std::map<std::string, size_t>::iterator i = word_count.find(word); // have an iterator
        auto prev = i->second;                          //  copy the current value
        word_count.erase(word);                         //  erase current data
        word_count.insert(make_pair(word, prev + 1));   //  add incremented data
      } else {
        word_count.insert({word, 1});
      }

      */

    }
  }

  for (auto print : word_count) {
    std::cout << print.first << ' ' << print.second << std::endl;
  }

  return 0;
}