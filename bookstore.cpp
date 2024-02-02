/*
    Bookstore transactions are summerized
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;                       // output variable

    if (std::cin >> total) {                // 1st item so trans == total
        Sales_item trans;                   // input variable
        while (std::cin >> trans) {         // As long as there is input
            if (total.isbn() == trans.isbn())   // if the ISBN's are same
                total += trans;                 // add trans to total
            else {                              // if ISBN's differ
                std::cout << total << std::endl;    // print total
                total = trans;                      // add trans to toal
            }
        }
        std::cout << total << std::endl;        // when no input print total
    } else {                                    // If no 1st item
        std::cerr <<  "No data?!" << std::endl; // print error
        return -1;                              // return an error 
    }
    
    return 0;                                    // return sucess
}