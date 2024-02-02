/*

   Concatenate two string literals and put in a
   dynamic array of char.
   The concatenate two lib strings to be the same
   as the first

*/

#include <iostream>
#include <string>
#include <new>
#include <memory>


int main() {

  //char* sl1 = "hello";
  //char* sl2 = " world";

  //char* result = new char[20];

 // result = strcat(sl1, sl2);   // this conversion is no longer allowed done in c

  
 // std::cout << result << std::endl;
  

  std::string str1 = "goodbye";
  std::string str2 = " world";

  std::string final = str1 + str2;

  std::cout << final << std::endl;
  
  //delete[] result;


  return 0;
}