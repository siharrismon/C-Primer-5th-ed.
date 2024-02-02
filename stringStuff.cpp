/*
Take input and read one line at a time
Compare 2 strings eq? if not which is larger
Next check if strings length eq? if not which is longer
Read strings from input concatonate and print with whitespace between strings
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);

  if (s1 == s2) {
    cout << "Strings are ==" << endl;
  } else {
    if (s1 > s2) {
      cout << "s1 is > s2" << endl;
      } else {
      cout << "s2 is > s1" << endl;
      }
  }

  if (s1.size() == s2.size()) {
      cout << "Strings are ==" << endl;
  } else {
      if (s1.size() > s2.size()) {
        cout << "s1 is > s2" << endl;
        } else {
        cout << "s2 is > s1" << endl;
        }
  }

  string s3 = s1 + s2;

  cout << s3 << endl;
  cout << s1 << " " << s2 << endl;

  return 0;
}