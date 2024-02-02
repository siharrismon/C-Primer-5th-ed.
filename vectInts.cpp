/*
  Read in ins from cin and make  vector
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
  int n = 0;
  vector<int> v;

  while(cin >> n) {
    v.push_back(n);
  }

  for (auto print : v) {

    cout << print << " ";
  }

  cout << endl;

  return 0;
}