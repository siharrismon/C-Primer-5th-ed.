/*
 * Count words of size 6 or fewer using bind and placeholders
 */

#include <iostream>
#include <functional>
#include <string>

bool check_size(const std::string&, std::string::size_type);

int main()
{
  std::string s1 = "hello";
  std::string s2 = "remember";

  auto check6 = bind(check_size, std::placeholders::_1, 6);

  bool b1 = check6(s1);
  bool b2 = check6(s2);

  std::cout << b1 << " " << b2 << std::endl;

  return 0;
}

bool check_size(const std::string& s, std::string::size_type sz)
{
  return s.size() >= sz;
}