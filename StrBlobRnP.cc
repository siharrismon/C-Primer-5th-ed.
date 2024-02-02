/*
   Read an input file a line at a timeinto StrBlob
   use a StrBlobPtr to print
*/
#pragma once

#include "StrBlob.h"
#include "StrBlobPtr.h"

#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>


StrBlob intake(std::ifstream&);
void StrBlPrint(StrBlob);

int main() {

  std::ifstream ifs("stringIn.txt");
  StrBlob blob = intake(ifs);

  StrBlPrint(blob);

  return 0;
}

StrBlob intake(std::ifstream &ifs) {
  std::string line;
  StrBlob bob;

  while (std::getline(ifs, line)) {
    bob.push_back(line);
  }
  return bob;
}

void StrBlPrint(StrBlob blob) {
 
  // cannot loop as operations not defined
  std::for_each(blob.begin(), blob.end(), [](StrBlobPtr p) 
  {std::cout << p.deref() << ' ';} );
  std::cout << std::endl;
}