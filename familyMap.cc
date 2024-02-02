/*
 *  Use a map to store family names and children's names:
 *  key is family name, values in a vector.
 *  Functionality to add a new family or
 *  new children
 */

#include <iostream>
#include <map>
#include <string>
#include <vector>

void newFamily(std::map<std::string, std::vector<std::pair<std::string, std::string>>>&, 
               const std::string&, const std::vector<std::pair<std::string, std::string>>&);
void newChild(std::map<std::string, std::vector<std::pair<std::string, std::string>>>&, 
              const std::string&, const std::pair<std::string, std::string>&);

int main()
{
  std::map<std::string, std::vector<std::pair<std::string, std::string>>> families;
  std::vector<std::pair<std::string, std::string>> kids = {
    {"Simon", "3rd Sept 1974"},
    {"Becky", "31st May 1978"}
  };
  std::vector<std::pair<std::string, std::string>> cats = {
    {"Daisy", "12th April 2003"},
    {"Rosie", "12th April 2003"},
  };

  newFamily(families, "Harris", kids);
  newFamily(families, "Cat", cats);
  newChild(families, "Cat", {"Dusty", "1st April 1984"});
  newFamily(families, "Cat", kids);

for(auto mapIter = families.begin();
    mapIter != families.end(); mapIter++)
    {
       std::cout << (*mapIter).first << ": ";

       std::vector<std::pair<std::string, std::string>> kidsNames = (*mapIter).second;

       for (auto vecIter = kidsNames.begin(); vecIter != kidsNames.end(); vecIter++){
           std::cout << vecIter->first << ' ' << vecIter->second << ", ";
       }
       std::cout << std::endl;
    }  
  return 0;
}

void newFamily(std::map<std::string, std::vector<std::pair<std::string, std::string>>>& families, 
               const std::string& name, const std::vector<std::pair<std::string, std::string>>& children)
{
  if (families.find(name) == families.end()) {
    families.emplace(name, children);
  } else {
    std::cerr << "Failure to add family " << name << ": name already taken" << std::endl;   
  }
}

void newChild(std::map<std::string, std::vector<std::pair<std::string, std::string>>>& families, 
              const std::string& name, const std::pair<std::string, std::string>& child)
{
  families[name].push_back(child);
}