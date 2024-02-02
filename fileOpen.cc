#include <iostream>
#include <string>
#include <vector>
#include <fstream>


std::vector<std::string> svec;

int main(int argc, char *argv[]) {

  std::ifstream ifs;
  ifs.open("./input.txt");
  if (!ifs) {
    std::cerr << "No file" << std::endl;
  } else {

// for output word by word    
    std::string word;
    while (ifs >> word) {
      svec.push_back(word);
    }


/* most compact form in a for loop
    for (std::string line ; std::getline(ifs, line); ) {
      svec.push_back(line);
    }
*/
/*  using while
    while(ifs.good()) {
      std::string line;
      std::getline(ifs, line);
      svec.push_back(line);
    }
*/


  }

  for (auto print: svec) {
    std::cout << print << std::endl;
  }
  
  return 0;
}

