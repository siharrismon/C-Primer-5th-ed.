/*
 *  Read cin and convert to upper case
 *  
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
  vector<string> svec;
  string s;

  while (cin >> s) {
    svec.push_back(s);
  }

  for (auto it = svec.begin(); it != svec.end() && !it->empty(); ++it) {
    for (auto i = it->begin();i != it->end(); ++i) {
      *i = toupper(*i);
    }
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}