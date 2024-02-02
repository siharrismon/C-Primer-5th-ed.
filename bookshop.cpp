/*
  Bookshop with Sales_data class
*/

#include <iostream>
#include "Sales_data.h"

int main() {

  //output variable for total and price
  Sales_data total;
  double price = 0.00;
  //if we write 1st item to total
  if (std::cin >> total.bookNo >> total.units_sold >> price) {
    //input variable for next item
    Sales_data sale;
    //while we can read a second item
    while (std::cin >> sale.bookNo >> sale.units_sold >> price) {
      //if the same isbn
      if (total.bookNo == sale.bookNo)
          //add 2nd item to total
          total += sale;
      else
          //print out the total
          std::cout << total << std::endl;
          //set total to the next item
          total = sale;

    } 
    //when the while has no input print out total
    std::cout << total << std::endl;
  } else {
      //if not 1st item print an error
      std::cerr <<  "No data?!" << std::endl;
      return -1;  
  }
  return 0;
}