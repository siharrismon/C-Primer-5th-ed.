/*
 *  Main accepts and prints command line args
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

int main(int argc, char *argv[]) {

  for (size_t word = 1; word < argc; ++word) {
          cout << argv[word] << " ";
  }
  cout << endl;
  
  return 0;
}