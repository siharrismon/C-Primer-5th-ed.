/*
 *  Using ?: find the odd values and double them.
 *  
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
  vector<int> vint{1,2,3,4,5,6,7,8,9,10};

  for (int i = 0; i != vint.size(); i++) {
    vint[i] % 2 == 1 ? cout << (vint[i] = vint[i] * 2) << " "
                     : cout << vint[i] << " ";   
  }
  cout << endl;

  return 0;
}