/*
 *  Read a series of strings and ints storing in a vector of pairs
 *  Use three ways to create pairs
 */

#include <iostream>
#include <vector>
#include <string>
#include <utility>

int main() {
  
  std::vector<std::pair<std::string, int>> pvec;

  /*  Method 1

  std::pair<std::string, int> pairs;

  while (std::cin >> pairs.first >> pairs.second) {
    pvec.push_back(pairs);
  }
  */

  /*  Method 2

  std::string name("");
  int num = 0;

  while (std::cin >> name >> num)
    pvec.emplace_back(std::make_pair(name, num));
  */

  // Method 3
  std::string name("");
  int num = 0;

  while (std::cin >> name >> num)
    pvec.push_back({name, num});

  // Common print
  for (auto entry : pvec){
    std::cout << entry.first << ' ' << entry.second << std::endl;
  }

  return 0;
}