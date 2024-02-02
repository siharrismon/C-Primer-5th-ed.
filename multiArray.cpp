/*
 *  Print the elements of a multi-dimensional arry.
 *  1st use range for loop, then subscript, finally pointers.
 *  Type directly, no auto or decltype.
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
  int ia[3][4] = {                  // define the 2D array
    {0,1,2,3},
    {4,5,6,7},
    {8,9,10,11}
  };

  cout << endl;
   
  // using range for loop
  for (int (&row)[4] : ia) {        // ref to an int, row set to ia[0][0]
    for (int &col : row) {          // ref for the beginning of each col
      cout << col << " ";           // print the data of col
    }
    cout << endl;
  }
  cout << endl;
 

  // using subscripts
  constexpr size_t rowCnt = 3, colCnt = 4;
  for (size_t i = 0; i != rowCnt; ++i) {
    for (size_t j = 0; j != colCnt; ++j){
      cout << ia[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // using pointers
  for (int (*p)[4] = ia; p != ia + 3; ++p) {
    for (int *pp = *p; pp != *p +4; ++pp) {
      cout << *pp << " ";
    }
    cout << endl;
  }
  cout << endl;


  return 0;
}