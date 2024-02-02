/*
 *  Read some ints into a vector and then print adjacent and opposite ends
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
  
  vector<int> v;
  int n = 0;

  while(cin >> n) {   //while we can write ints to n
    v.push_back(n);   //add each int onto the end of a vector
  }

  //increment i one position at a time until vector size is reached
  auto beg = v.begin() , end = v.end();   //make it look tidy
  int m = 0;
  for (auto i = beg; i != end; ++i) {   //use the itterator to loop the vector
    
    cout << *(beg + m) << " " << *(end - m) << endl;//print from each end 
    ++m;
  }

   //print adjacent ints in the vector
  int p = 0;
  for (auto i = beg; i != end; ++i) {
    p++;
    cout << *i << " " << *(i + 1) << endl;
  }
  cout << endl;

  return 0;
}