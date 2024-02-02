/*
*   A multimap of authors 
*
*/

#include <map>
#include <iostream>
#include <string>

void newAuthor(std::multimap<std::string, std::string>&, std::pair<std::string, std::string>);
void newBook(std::multimap<std::string, std::string>&, std::string, std::string);
void findEntry(std::multimap<std::string, std::string>&, std::string);   // Must use mmap.find()
void eraseEntry(std::multimap<std::string, std::string>&, std::string);  // Must use mmap.erase()
void abcPrint(std::multimap<std::string, std::string>&);    // prints authors and works alphabetically

int main() {

  std::multimap<std::string, std::string> authors;

  newAuthor(authors, {"J.R.R. Tolkien", "Fellowship of the Ring"});
  newBook(authors, "The Two Towers", "J.R.R. Tolkien");
  newBook(authors, "The Return of the King", "J.R.R. Tolkien");
  newAuthor(authors, {"Spike Milligan", "Hitler, My Part in his Downfall"});
  newBook(authors, "Monty, My Part in his Victory", "Spike Milligan");
  newBook(authors, "The Hobbit", "J.R.R. Tolkien");
  abcPrint(authors);
  findEntry(authors, "J.R.R. Tolkien");
  eraseEntry(authors, "Spike Milligan");
  abcPrint(authors);

  return 0;
}

void newAuthor(std::multimap<std::string, std::string>& mmap, std::pair<std::string, std::string> pair) {
  mmap.insert(pair);
}

void newBook(std::multimap<std::string, std::string>& mmap, std::string book, std::string author) {
  mmap.emplace(author, book);
}

void findEntry(std::multimap<std::string, std::string>& mmap, std::string search_item) {
  std::multimap<std::string, std::string>::size_type entries = mmap.count(search_item);
  std::multimap<std::string, std::string>::iterator iter = mmap.find(search_item);

  std::cout << search_item << " has written:\n";

  while (entries) {
    std::cout << iter->second << std::endl;
    ++iter;
    --entries;
  }
  std::cout << std::endl;
}

void eraseEntry(std::multimap<std::string, std::string>& mmap, std::string search_item) {
  auto count = mmap.count(search_item);
  if (mmap.erase(search_item)) {
    std::cout << "Success " << search_item << ' ' << count << " removed" <<std::endl;
  } else {
    std::cout << search_item << " not found" << std::endl;
  }
  std::cout << std::endl;
}

void abcPrint(std::multimap<std::string, std::string>& mmap) {
  
  for(auto mapIter = mmap.begin(); mapIter != mmap.end(); mapIter++) {
       std::cout << mapIter->first << ": " << mapIter->second << std::endl;      
    } 
     std::cout << std::endl;
}