/*
 *  Reads in vectors and outputs their size and length
 *
 *     vector<int> v1;
 *     vector<int> v2(10);
 *     vector<int> v3(10, 42);
 *     vector<int> v4{10};
 *     vector<int> v5{10, 42};
 *     vector<string> v6{10};
 *     vector<string> v7{10, "hi"};
 *
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

  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  cout << "v1 has " << v1.size() << " members:" << endl;

  for (auto print : v1) {
      cout << print << " ";
  }
  cout << endl;

  cout << "v2 has " << v2.size() << " members:" << endl;

  for (auto print : v2) {
      cout << print << " ";
  }
  cout << endl;

  cout << "v3 has " << v3.size() << " members:" << endl;

  for (auto print : v3) {
      cout << print << " ";
  }
  cout << endl;

  cout << "v4 has " << v4.size() << " members:" << endl;

  for (auto print : v4) {
      cout << print << " ";
  }
  cout << endl;

  cout << "v5 has " << v5.size() << " members:" << endl;

  for (auto print : v5) {
      cout << print << " ";
  }
  cout << endl;

  cout << "v6 has " << v6.size() << " members:" << endl;

  for (auto print : v6) {
      cout << print << " ";
  }
  cout << endl;

  cout << "v7 has " << v7.size() << " members:" << endl;

  for (auto print : v7) {
      cout << print << " ";
  }
  cout << endl;
  
  return 0;
}