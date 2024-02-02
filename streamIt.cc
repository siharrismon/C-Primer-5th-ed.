/*
 *   Use stream iterators to read a .txt
 *   into a vector<string>
 */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

int main()
{
  std::ifstream ifs;
  std::string word;

  // open the file
  ifs.open("./stringIn.txt");
  
  if (!ifs) {
    std::cerr << "No file" << std::endl;
  } else {
  // store lines in vector using stream iterators   
    std::istream_iterator<std::string> in_iter(ifs), eof;
    std::vector<std::string> svec(in_iter, eof);

    for (std::string& s : svec) {
      std::istringstream strm(s);
      while (strm >> word) {    
        std::cout << word << std::endl;
      }
    }  
  }
  return 0;
}