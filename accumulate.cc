/*
 * Use accumulate to sum the elements in a vector<int>
 */

#include <vector>
#include <numeric>
#include <iostream>

int main()
{
  std::vector<int> ivec = {12 ,23 ,34 ,45, 56, 67, 78, 89};

  int sum = accumulate(ivec.begin(), ivec.end(), 0);

  std::cout << sum << std::endl;

  return 0;
}