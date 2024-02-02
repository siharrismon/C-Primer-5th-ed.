/*
 *  Use itterators to group grades into clusters and print the total amount
 */

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  // count the number of grades by incrementing 11 10 poit bins
  unsigned grade;                 // input variable
  vector<unsigned> scores(11,0);  // 11 bins initialised @ 0
  auto begin = scores.begin();

  while (cin >> grade) {        // read in the grades
    if (grade <= 100) {         // if they are valid
      ++ *(begin + (grade / 10)); // +1 to the appropriate bin
    }
  }

  for (auto i = begin; i != scores.end(); ++i) { // go up the vector's iterator
    cout << *i << " ";      //print the data at each position
  }
  cout << endl;

  return 0;
}
