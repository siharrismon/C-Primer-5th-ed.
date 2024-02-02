#include "Sales_data.h"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
  Sales_data order1;
  Sales_data order2("201-67890-J");
  Sales_data order3("222-67654-K", 5, 34.99);
  Sales_data order4(std::cin);
  
  print(std::cout, order1);
  std::cout << std::endl;
  print(std::cout, order2);
  std::cout << std::endl;
  print(std::cout, order3);
  std::cout << std::endl;
  print(std::cout, order4);
  std::cout << std::endl;

  return 0;
}