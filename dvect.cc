/*
*    one function returns a dynamically allocated vector<int>
*    next func gives values to elements from std::cin
*    the last func prints the elements
*/

#include <iostream>
#include <vector>

std::vector<int>* newVector();
void populate(std::vector<int>*, std::istream&);
void printVec(std::vector<int>*);

int main() {
  std::vector<int> *pvi = newVector();
  populate(pvi, std::cin);
  printVec(pvi);

  delete pvi;

  return 0;
}

std::vector<int>* newVector() {
  return new std::vector<int>;
}

void populate(std::vector<int> *pvi, std::istream &input) {
  int n = 0;
  while (input >> n) {
    pvi->push_back(n);
  } 
}

void printVec(std::vector<int> *pvi) {
  for (auto print : *pvi) {
    std::cout << print << ' ';
  }
  std::cout << std::endl;
}