/*
 *  Some ways to use arrays in functions eg print
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

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print(int (*matrix)[10], int rowSize);

void print(const char *cp) {
  if (cp) {                  // if cp is not nullpointer
    while (*cp)              // while the char is not null
      cout << *cp++;         // print the char and advance the pointer
  }   
    cout << endl;
}

void print(const int *begin, const int *end) {
  while (begin != end)        // while begin does not point to end
    cout << *begin++; 
   cout << endl;              // print the current value and advance begin
}

void print(const int ia[], size_t size) { // equiv to const int *ia
  for (size_t i = 0; i != size; ++i) {  // array size is type size_t
    cout << ia[i]  << endl;
  }
}

int main() {
  int j[2] = {0,1};
  print(std::begin(j), std::end(j));

  print(j, std::end(j) - std::begin(j)); 

  return 0;
}