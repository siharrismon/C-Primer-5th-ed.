/*
 *  Input: vector<int> and int 
 *  (search for the int value in the vector with iterators)
 *  Output: 1st bool, 2nd iterator to the value
 *  Handle the case where the element is not found
 */

#include <vector>
#include <iostream>

bool is_value(std::vector<int>, int);
std::vector<int>::iterator get_value(std::vector<int>, int);

int main()
{
  std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 7, m = 42;

  bool found = is_value(ivec, n);
  bool found2 = is_value(ivec, m);

  std::cout << found << std::endl;
  std::cout << *get_value(ivec, n) << std::endl;
  std::cout << found2 << std::endl;
  std::cout << *get_value(ivec, m) << std::endl;
 
  return 0;
}

bool is_value(std::vector<int> ivec, int n)
{
  std::vector<int>::iterator begin = ivec.begin(),
                               end = ivec.end();

  while (begin != end)
  {
    if (*begin == n)
      return true;
    ++begin;  
  }   
    return false;                           
}

std::vector<int>::iterator get_value(std::vector<int> ivec, int n)
{
  std::vector<int>::iterator begin = ivec.begin(),
                               end = ivec.end();

  for (; begin != end; ++begin)
  {
    if (*begin == n)
      return begin;  
  }
    return end;                              
}