/*
 *  Read cin and convert to upper case
 *  Print 8 words per line
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
  vector<string> svec;  //string vector
  string input("");     //for words read from the file

  while (cin >> input) {    //while input is read
    svec.push_back(input);  //append each string "word" to the vector 
  }

  int cnt = 0;    //initialise counter

  for (string s : svec) {       // for each string in the vector
    for (int i = 0; i < s.size(); ++i) {  //for each char in the string
      s[i]= toupper(s[i]);                // convert to upper
    }  
    cout << s << " ";         // output the string and a space
    ++ cnt;                   //increment count
    if (cnt % 8 == 0) {       // new line every 8 words
      cout << endl;
    }
  }
    cout << endl;     //dont forget this one


  return 0;
}
