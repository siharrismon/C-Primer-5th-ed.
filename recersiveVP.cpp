/*
    Use recersion to print the contents of a vector
    Added an inline function which is not used
    and NDEBUG section
    NDEBUG define added as could not get clang++ to add it -D<NDEBUG>
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
#include <cassert>

#define NDEBUG

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

//inline function - not used in this file
inline bool isShorter(const string &s1, const string &s2)
{
  return s1.size() < s2.size();
}

void recursivePrint(std::vector<int> ivec, size_t size) {
  
  if (size == 0) {
    cout << endl;
  } else {
    cout << size;

    #ifndef NDEBUG
    std::cerr << " " << __func__ << ": array size is " << size <<endl;
    #endif

    recursivePrint(ivec, size - 1);    
  }  
}
 

int main(int argc, char *argv[]) {

  std::vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  size_t size = ivec.size();

  recursivePrint(ivec, size);


  return 0;
}