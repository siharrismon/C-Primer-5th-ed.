/*
 *  Read 2 numbers from input and divide one by the other
 *  Throw an exception if 0 is entered
 *  
 */

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

  double dividend = 0, quotient = 0;

  cout << "Please enter two numbers seperated by a space" << endl;

  while (cin >> dividend >> quotient) {
    try {                              // try block
      if (quotient == 0) {             // error condition
        throw std::runtime_error("Divide by 0"); // throw error with additional
      }                                          // description   

      cout << dividend / quotient << endl; 

    } catch (std::runtime_error err) {  // if error thrown
        cout << err.what()
             << "\nTry again? Enter y or n" << endl;
        char c;
        cin >> c;
        if (!cin || c == 'n') {
          break;
        } else {
          cout << "Please enter two numbers seperated by a space" << endl;
        }    
    }

  }
  return 0;
}
