/*
    Guess the Type 2!!!
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

  const int i = 42;
  auto j = i;
  const auto &k = i;
  auto *p = &i;
  const auto j2 = i, &k2 = i;

   cout << "Guess The Type 2!!!\n" << endl;
   cout << "const int i = 42,  guess = " << "const int 42" 
             << ", value = " << i << endl;
   cout << "auto j = i,  guess = " << "int 42" 
             << ", value = " << j << endl;
   cout << "const auto &k = i,  guess = " << "42" 
             << ", value = " << k << endl;
   cout << "auto *p = &i,  guess = " << "address of i" 
             << ", value = " << p << endl;          
   cout << "const auto j2 = i, &k2 = i,  guess = " << "both const int 42" 
             << ", value k = " << j2 << "and k = "<< k2 
             << "\n" << endl;

  return 0;
}