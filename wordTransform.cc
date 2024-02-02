/*
*   Reads a file of some text, compares the text to info in 
*   another file. Then as per the rules in the info file
*   substitues some words for others.
*/

#include <fstream>
#include <sstream>
#include <iostream>
#include <map>
#include <stdexcept>

void word_transform(std::ifstream&, std::ifstream&);
std::map<std::string, std::string> buildMap(std::ifstream&);
const std::string& transform(const std::string&, std::map<std::string, std::string>&);

int main() {

  std::ifstream ifsSrc("msg.txt");        // input file & file stream
  std::ifstream ifsRules("wTrans.txt");      // tranform rules file & filestream

  word_transform(ifsRules, ifsSrc);

  return 0;
}

void
word_transform(std::ifstream& map_file, std::ifstream& input) {
  auto transform_map = buildMap(map_file);
  std::string text;

  while (getline(input, text)) {
    std::istringstream stream(text);
    std::string word;
    bool firstword = true;

    while (stream >> word) {
      if (firstword) {
        firstword = false;
      } else {
        std::cout << " ";
      }
      std::cout << transform(word, transform_map);
    }
    std::cout << std::endl;
  }
}

std::map<std::string, std::string> buildMap(std::ifstream& map_file) {
  std::map<std::string, std::string> transform_map;
  std::string key;
  std::string value;
  
  while (map_file >> key && getline(map_file, value)) {
    if (value.size() > 1) {
      //transform_map[key] = value.substr(1);
      transform_map.insert({key, value.substr(1)});
    } else {
      throw std::runtime_error("no rule for " + key);
    }
  }
  return transform_map;  
}

const std::string&
transform(const std::string& sample, std::map<std::string, std::string>& tmap) {
  auto map_it = tmap.find(sample);

  if (map_it != tmap.cend()) {
    return map_it->second;
  } else {
    return sample;
  }
}
