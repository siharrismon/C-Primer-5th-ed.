/*
  Input a string and output another string with the punctuation removed
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

  string original("Simon's sentence. Can, I remove the punctuation???");
  string processed("");

  while (cin >> n) {
    for (auto c : original) { //c is each char in the string not the index
      if (!ispunct(c)) {
        processed += c;
      }

    }
  }
    cout << processed << endl;

  return 0;
}