/*
 *  A functiom that takes an initializer list and sums the contents
 *  
 *  
 */

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>
#include <stdexcept>
#include "Chapter6.h"
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int ilsum(std::initializer_list<int> ilist);

int main(int argc, char *argv[]) {

  std::initializer_list<int> ilist = { 1, 2, 3, 4, 5};

  cout << ilsum(ilist) << endl;

  return 0;
}

int ilsum(std::initializer_list<int> ilist) {
  int sum = 0;
  for (auto item : ilist) {
    sum += item;
  }

  return sum;
}