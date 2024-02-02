/*
Read an input data file with sales info for a title and output the total data
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sale, total;

    while (std::cin >> sale) {
        total += sale;
    }

    std::cout << total << std::endl;
    
    return 0;
}