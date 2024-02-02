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
  for (int i =0; i != v.size(); ++i) {    
    cout << v[i] << " " << v[i+1] << endl; //print value at i and i+1
  }

  cout << endl;

  //increment i one position at a time until vector sizeis reached
  for (int i =0; i != v.size(); ++i) {    
    cout << v[i] << " " << v[v.size() - 1 - i] //last-1-i as last is v.end
         << endl;       //print value 1st and last, etc
  }

  return 0;
}