/*
    Another version ofthe bookstore program using sales data class
 */

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>
#include <stdexcept>
#include "Chapter6.h"
#include <initializer_list>
#include <cassert>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char *argv[])
{
  Sales_data total;

  if (read(cin, total)) {
    Sales_data trans;
    while (read(cin, trans)) {
      if (total.isbn() == trans.isbn())
        total.combine(trans);
      else {
        print (cout, total) << endl;
        total = trans;
      }
    }
    print(cout, total) << endl;    
  } else {
    std::cerr << "No data?!" << endl;
  }
  
  return 0;
}