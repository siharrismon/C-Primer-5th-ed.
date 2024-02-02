/*
    Declarations for a function and a vector with the same function pointer
    type.
    Add four arithmetic functions with pointers to them in the vector.
    Call each function and print the answer
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

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// inline functions prototype & definitions
inline int add(int n, int m)
{
  return n + m;
};
inline int subtract(int n, int m)
{
  return n - m;
};
inline int multiply(int n, int m)
{
  return n * m;
}
inline int divide(int n, int m)
{
  return n / m;
}

typedef int (*sums)(int, int);   //  alias for function pointers type

int main(int argc, char **argv)
{
  sums pa = &add;
  sums ps = &subtract;
  sums pm = &multiply;
  sums pd = &divide;
  vector<sums> fvec = {pa, ps, pm, pd};

  for (auto func : fvec)
  {
    cout << func(9, 3) << endl;
  }
  //or
  cout << fvec[0](5, 7) << endl;
  cout << fvec[1](5, 7) << endl;
  cout << fvec[2](5, 7) << endl;
  cout << fvec[3](5, 7) << endl;


  return 0;
}
