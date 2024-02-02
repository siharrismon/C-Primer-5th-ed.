/*
 *  Write a factorial function
 *  
 *  
 */

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>
#include <stdexcept>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Definition Get a number from cin and find its factorial
int fact(void) {
  int n;

  cout << "Please enter an integer: ";
  cin >> n;  

     int result = 1;
     while (n > 1) {
       result *= n--;  
     } // end while

   return result;
   
  }

//  Definition find absolute value of a number
double abs_val(double x) {

  return x < 0 ? -x 
               : x;  
} 

// Definition Counts how many times it is called
size_t count_calls() {
  static size_t counter = 0;
  return counter++;
}

void pswap(int *p, int *q) {
  int temp = *p;
  *p = *q; 
  *q = temp;
}

