/*
 *  Some functions, compare two ints and swap two ints
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

void larger(int a, int *p) {
  
  a > *p ? cout << a << endl 
         : cout << *p << endl;

}

void pswap(int *p, int *q) {

  *p = *p + *q;
  *q = *p - *q;
  *p = *p - *q;

}