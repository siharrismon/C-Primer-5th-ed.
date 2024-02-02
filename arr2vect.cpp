/*
 *  1st make a vector from an array of ints
 *  Then copy a vector of ints into an array
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
  // copy array into vector
  vector<int> vec(std::begin(arr), std::end(arr));
  // print vector
  for (auto print : arr) {
      cout << print << " ";
  }
  cout << endl;

  // copy vec into arr2: create array same size as vector
  int size = vec.end() - vec.begin();
  int arr2[size];
  // copy the ints
  for (auto i = 0; i < size; ++i) {
    arr2[i] = vec[i];
  }
  //print vector
  for (auto print : arr2) {
      cout << print << " ";
  }
  cout << endl;

  return 0;
}