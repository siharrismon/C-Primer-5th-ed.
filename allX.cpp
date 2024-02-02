/*
  Take a string and change all values to "X"
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string myString("FFS string is confusing"); // const char[24]

  if (!myString.empty()) {
    for (char &i : myString) {   // can be char or auto type
      
      i = 'X';// ' ' operate on each char " " operates on string which is const
    }
  }
  
  cout << myString << endl;

  return 0;
}