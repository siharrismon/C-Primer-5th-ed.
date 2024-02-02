/*
 * Use lambds functions to a) add two ints
 *                         b) add an int to a variable from the previous lambda
 */

#include <iostream>
#include <vector>
#include <iterator>

int main()
{
   std::vector<std::vector<int>> ivec = {{1,2,3,4,5},
                                         {1,2,3,4,5},
                                         {1,2,3,4,5},
                                         {1,2,3,4,5},
                                         {1,2,3,4,5}
                                         };

  int m = 0;                                       
 
  for (int row = 0 ; row != ivec.size(); row++)
  {
    int n = 0;
    // for(auto& col : row) works but generates warnings as col is unused
    for (int col = 0; col != ivec[row].size(); col++) 
    {
      
      auto sum = [n, m](){return n+ m;};   
      std::cout << sum() ;
      n++;
      m++;
    }
    std::cout << std::endl;
  }

  // create a lambda with a base case!!!
  auto f = [&m]()mutable->bool{return (m-- == 0) ? true :  false ;};
  while(!f())
  {
    std::cout << m << " ";
  }
  std::cout << std::endl;

  return 0;
}