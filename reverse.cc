/*
 *  Use reverse_iterator to print a vector in reverse order
 *  then print in reverse order with ordinary iterators
 */

#include <iterator>
#include <iostream>
#include <vector>
#include <numeric>
#include <string>


int main()
{
  // WHY DOES THIS NOT WORK ON STRINGS???
  std::vector<std::string> svec = {"Risk World domination"};
  std::ostream_iterator<std::string> os_iter(std::cout, " ");
  std::copy(svec.crbegin(), svec.crend(), os_iter);
  std::cout << std::endl;

  std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::ostream_iterator<int> out_iter(std::cout, " ");
  std::copy(ivec.crbegin(), ivec.crend(), out_iter);
  std::cout << std::endl;  

  for (auto iter = --ivec.cend(); iter != --ivec.begin(); iter--)
  {
    std::cout << *iter << ' ';
  }
  std::cout << std::endl;

  return 0;
}