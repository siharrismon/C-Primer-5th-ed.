/*
 * Write a function that takes and returns an istream&, reads and prints the
 * stream until EOF and clear the error state
 */

#include <iostream>
#include <string>
#include <sstream>

// function that takes and returns an itream& reading and printing until EOF
std::istream& readNprint(std::istream&);

int main() {
 
  readNprint(std::cin);

  return 0;
}

std::istream& readNprint(std::istream &is) {
  std::string print;          // string for temporary storage
 
  while(!is.eof()) {          // checks eofbit is not set on the input stream
    std::getline(is, print);
    std::cout << print <<std::endl;
  }
  is.clear();

  return is;
}