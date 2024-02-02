/*
 * Use bind and check_size to find the first element in a vector of ints
 * that has a value greater than the length of a specified string
 */

#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

bool check_size(const std::vector<int>::iterator, std::string::size_type);

int main()
{
  std::string string = "length of this";
  std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  auto checkit = bind(check_size, std::placeholders::_1, string.size());

  for(auto it = vec.begin(); it != vec.end(); it++)
  {
     if (checkit(it))
     {
        std::cout << *it << " ";
        break;  
     }  
  }
     std::cout << std::endl;
  return 0;
}

bool check_size(const std::vector<int>::iterator i, std::string::size_type sz)
{
    return *i >= sz;
}