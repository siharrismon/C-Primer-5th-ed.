/*
 *  Use unique_copy to copy the unique items in a vector
 *  into a list
 */

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <functional>
#include <numeric>
#include <algorithm>

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9, 9, 10, 10};

    std::list<int> list;
    
    std::unique_copy(numbers.begin(), numbers.end(), std::back_insert_iterator(list));

    for (auto item : list) {   
        std::cout << item << ' ';
    }
 
    std::cout << std::endl;

    return 0;
}