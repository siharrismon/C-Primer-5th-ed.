/*
 *  Read a set of book sales transactions and write to std output
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2, item3, item4;          //input objects

    std::cin >> item1 >> item2 >> item3 >> item4;   //read transactions

    std::cout << item1 << std::endl;
    std::cout << item2 << std::endl;
    std::cout << item3 << std::endl;
    std::cout << item4 << std::endl; //output

    return 0;
}