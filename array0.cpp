/*
 *  Use pointers to make all items in an array 0
 */

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  int arr[] = {1,2,3,4,5,6,7,8,9,0};
  int *parr = std::begin(arr), *pend = std::end(arr);

  while (parr != pend) {
    *parr = 0;
    ++parr;
  }

  for (int *print = arr; *print != *pend; ++print) {
    cout << *print;
  }
 
  cout << endl;

  return 0;
}
