/*
*    one function returns a dynamically allocated vector<int>
*    next func gives values to elements from std::cin
*    the last func prints the elements
*    All using shared pointers
*/

#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> newVector();
void populate(std::shared_ptr<std::vector<int>>, std::istream&);
void printVec(std::shared_ptr<std::vector<int>>);

int main() {
  std::shared_ptr<std::vector<int>> pvi = newVector();
  populate(pvi, std::cin);
  printVec(pvi);

  return 0;
}

std::shared_ptr<std::vector<int>> newVector() {
  return std::make_shared<std::vector<int>>();
}

void populate(std::shared_ptr<std::vector<int>> pvi, std::istream &input) {
  int n = 0;
  while (input >> n) {
    pvi->push_back(n);
  } 
}

void printVec(std::shared_ptr<std::vector<int>> pvi) {
  for (auto print : *pvi) {
    std::cout << print << ' ';
  }
  std::cout << std::endl;
}