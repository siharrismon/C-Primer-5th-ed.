/*
 *  Call a function from Chapter6.h and fact.cc (fact())
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

int main() {

  cout << fact() << endl;

  int x = 5, y = 7;
  int *p = &x;
  int *q = &y;

  pswap(p,q);
  
  cout << "x = " << x << " y = " << y << endl;

  return 0;
}