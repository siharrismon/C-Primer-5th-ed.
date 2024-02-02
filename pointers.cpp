#include <iostream>

int main()
{
    int n = 42, m = 69;
    int* pointer = &n;
    
    std::cout << "deref and address " <<  *pointer << " " << pointer << std::endl;

    *pointer = 21;

    std::cout << "n is " << n << std::endl;

    pointer = &m;

    std::cout << "deref and address "  << *pointer << " " << pointer << std::endl;

    return 0;
}