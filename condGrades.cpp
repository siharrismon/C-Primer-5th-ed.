/*
 *  Extend the grading prog to also assign:
 *  60 - 75 inclusive - low pass
 *  use ?: then again with if
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

  int grade = 0;

  while (cin >> grade) {

    string finalgrade = (grade > 90)  ? "high pass"
                      : (grade > 75 ) ? "pass"
                      : (grade > 59 ) ? "low pass" 
                                      : "fail";

    cout << finalgrade << endl;
  }

  return 0;                                    
}