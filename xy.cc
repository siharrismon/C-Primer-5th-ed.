/*
 *  Define 2 classes: x and y
 *  x has a pointer to y
 *  y has an object of type x
 */

#include <iostream>
#include <string>

class y;


class x {
public:
  y *py = nullptr;
  int n = 69;
  int m = 98;
    
};

class y {
public:  
  x xthing;
  int n = 42;
};

int main() {
  

  y ylike;
  x xlike;

  
  std::cout << "y = " << ylike.n << " x = " << xlike.py << std::endl;

  return 0;
}