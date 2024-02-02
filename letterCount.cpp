/*
 *  Count the number of times some two letter sequences occurr
 *  ff, fl and fi
 *  
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
  
  char ch;        // input variable
  bool isf;       // variable to store if the last ch was f
  int isff = 0, isfl =0, isfi = 0;   // output variables to store the count

  while (cin >> ch) {

    switch (ch) {
      case 'f':
        if (isf == true) {  // if f is read and previous letter was an f
          ++isff;           // increment counter
        } 
        isf = true;         // set bool to true to store that last letter was f
        break;
      case 'l':             // if an l
        if (isf == true)    // and previous letter was an f
        ++isfl;             // increment counter
        isf = false;        // set bool to false as last letter not an f
        break;
      case 'i':             // ditto l
        if (isf == true)
        ++isfi;
        isf = false;
        break;
      default:              // all other cases set bool to false
        isf = false;
        break;   
    }
  }
  cout << "Number of ff's " << isff << "\n"
       << "Number of fl's" << isfl << "\n"
       << "Number of fi's" << isfi << endl;



  return 0;
}