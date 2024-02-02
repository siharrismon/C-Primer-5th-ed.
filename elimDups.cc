/*
 * Eliminate duplicates from a vector<string>, printing at each stage
 * 
 * Pt2 use function isShorter and stble_sort after
 * 
 * Pt3 use a function that checks if a word is >=5 chars and use the alo
 * partition
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

void elimDups(std::vector<std::string>&);
void print_svec(std::vector<std::string>&);
bool isShorter(const std::string&, const std::string&);
bool fiveOrMore(std::string&);
void biggies(std::vector<std::string>&, std::vector<std::string>::size_type);
std::string make_plural(std::size_t, std::string&, std::string&);

int main(void)
{
  std::vector<std::string> words = 
                       {"the", "quick", "brown", "fox", "the", "brown", "dog",
                         "rabbit", "elephants", "hippopotamus"};
                     
  
  //elimDups(words);

  //stable_sort(words.begin(), words.end(), isShorter);
  print_svec(words);

  //auto bound = std::partition(words.begin(), words.end(), fiveOrMore);

  //std::cout << *bound <<std::endl;

  biggies(words, 5);

  return 0;
}

void print_svec(std::vector<std::string>& svec)
{
  for (auto print : svec)
  {
    std::cout << print << " ";
  }
  std::cout << std::endl;
}

void elimDups(std::vector<std::string> &words)
{
  print_svec(words);
  // sort the words
  sort(words.begin(), words.end());

  print_svec(words);
  // put duplicated words at the end of the vector and create an iterator
  // that points to the point where the unique words end
  std::vector<std::string>::iterator end_unique = std::unique(words.begin(), 
                                                              words.end());
  print_svec(words);                                                            
  // erase the duplicates and the end of the vector
  words.erase(end_unique, words.end());

  print_svec(words);

  //biggies(words, words.size());

}

bool isShorter(const std::string& string1, const std::string& string2)
{
  return string1.size() < string2.size();
}

bool fiveOrMore(std::string& string)
{
  return string.size() < 5;
}

std::string make_plural(std::size_t counter, std::string& word, 
                                             std::string& ending)
{
  return (counter > 1) ? word + ending : word;
}

void biggies(std::vector<std::string>& words, 
             std::vector<std::string>::size_type sz)
{
  elimDups(words);

  stable_sort(words.begin(), words.end(),
               [](const std::string& a, const std::string& b)
                  {return a.size() < b.size();});

  auto wc = stable_partition(words.begin(), words.end(),
               [sz](const std::string& a)
                 {return a.size() >= sz;});

  /*
  auto wc = find_if(words.begin(), words.end(),
               [sz](const std::string& a)
                 {return a.size() >= sz;});    
   */                         

  auto count = wc - words.begin();   //change for stable_partition
  //auto count = words.end() - wc    use for find_if

  std::cout << count << std::endl; 

  std::string str = "word", pl = "s";

  std::cout << count << " " << make_plural(count, str, pl)
            << " of length " << sz << " or longer" <<std::endl;

  // use this for find_if
  //for_each(wc, words.end(),
  //          [](const std::string& s){std::cout << s << " ";});

  // use this for stable_partiton
  for_each(words.begin(), wc,
            [](const std::string& s){std::cout << s << " ";});
  std::cout << std::endl;                                                  

}