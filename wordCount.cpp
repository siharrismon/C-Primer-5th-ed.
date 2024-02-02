/*
 *  Read from std::cin and count the number of times each word occurrs.
 *  Return the word with the most occurrances and the number times it
 *  occurred.
 */

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
                                
  vector<string> svec;        // string vector to store input
  string input;               // input variable for words read from the file

  while (cin >> input) {      // while input can be written
    svec.push_back(input);    // append each string "word" to the vector 
  }  // end while
  
  // Count the words

  vector<int> ivec(svec.size());  // create an int vector same size as the svec                             
  for (string word : svec) {    // loop over each string in svec
                          // and for each string loop over the remaining strings   
    for (int i = 0; i != svec.size(); ++i) {
                              // comparing the original string to the others
      if (word == svec[i]) {
        ++ivec[i];            // count each time compare is true
      }  // end if        store the number of matches in ivec same index as svec
    }  // end inner for 
  }  //end outer for


  // Find the max word that appears the most
  
  int max = 0, n = 0;         // variables to store highest number and its index                             
  for (int j = 0; j < ivec.size(); j++) {   // loop over ivec
    if (ivec[j] > max) {      // if the value is > current max
      max = ivec[j];          // update max
      n = j;                  // update n
    } //end if           
  } //end for                              
                                 // print max and svec[n]
  cout << svec[n] << " occurrs " << max << " times." << endl;
 
  return 0;
}  // end main
