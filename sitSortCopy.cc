/*
 *  Use stream iterators, sort and copy to read a stream of ints 
 *  from standard input, sort them and write back to the 
 *  std output
 */

#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>


int main()
{
    std::vector<int> ivec;
    std::ostream_iterator<int> out_iter(std::cout, " ");
    std::copy(std::istream_iterator<int>(std::cin),
              std::istream_iterator<int>(),
              std::back_inserter(ivec));

    std::sort(ivec.begin(), ivec.end());
    std::copy(ivec.begin(), ivec.end(), out_iter);
    std::cout <<std::endl;        

    return 0;
}