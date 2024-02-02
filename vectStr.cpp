/*
  Read in strings from cin and make  vector
*/

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string s;
  vector<string> v;

  while(getline(cin, s)) {
    v.push_back(s);
  }

  for (auto print : v) {

    cout << print << " ";
  }

  cout << endl;

  return 0;
}