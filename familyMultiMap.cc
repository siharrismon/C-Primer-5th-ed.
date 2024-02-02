/*
 *  Like family map but Multimap
 *  newChild does not work, cannot select the family if there are two
 *  as the key is the key and they both have the same
 */

#include <iostream>
#include <map>
#include <string>
#include <vector>


void newFamily(std::multimap<std::string, std::vector<std::pair<std::string, std::string>>>&, 
               const std::string&, const std::vector<std::pair<std::string, std::string>>&);
void newChild(std::multimap<std::string, std::vector<std::pair<std::string, std::string>>>&, 
              const std::string&, const std::pair<std::string, std::string>&);

int main()
{
  std::multimap<std::string, std::vector<std::pair<std::string, std::string>>> families;
  std::vector<std::pair<std::string, std::string>> kids = {
    {"Simon", "3rd Sept 1974"},
    {"Becky", "31st May 1978"}
  };
  std::vector<std::pair<std::string, std::string>> cats = {
    {"Daisy", "12th April 2003"},
    {"Rosie", "12th April 2003"},
  };
  std::vector<std::pair<std::string, std::string>> kids2 = {
    {"Simon", "3rd Sept 1974"},
    {"Beck", "31st May 1979"}
  };

  newFamily(families, "Harris", kids);
  newFamily(families, "Cat", cats);
  newFamily(families, "Cat", kids2);
  newChild(families, "Cat", {"Dusty", "1st April 1984"});

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

void newFamily(std::multimap<std::string, std::vector<std::pair<std::string, std::string>>>& families, 
               const std::string& name, const std::vector<std::pair<std::string, std::string>>& children)
{
  families.emplace(name, children);
}

void newChild(std::multimap<std::string, std::vector<std::pair<std::string, std::string>>>& families, 
              const std::string& name, const std::pair<std::string, std::string>& child)
{
  auto mapIter = families.find(name);
  if (mapIter == families.end()) {
    std::cerr << "Family " << name << " not found" << std::endl;
  } else {
     mapIter->second.push_back(child);  
  } 
}