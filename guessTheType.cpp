/*
Takes defs from Ex Sec 2.5.2 Ex 2.34 and outputs before
and after asignment
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

    int i = 0 , &r = i;  // original values of input
    auto a = r;

    cout << "Guess The Type\n" << endl;

    //print original values
    cout << endl;
    cout << "Original assignments:/n" << endl;
    cout << "i = " << i << ", r = " << r << ", a = " << a << endl;
    cout << endl;

    //first operations
    const int ci = i, &cr = ci;

    cout << "ci = " << ci << " and cr = " << cr << endl;
    cout << "\nFirst Operations:\n" << endl;

    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;

    cout << "auto b = ci,  guess = " << "0" 
              << ", value = " << b << endl;
    cout << "auto c = cr,  guess = " << "0" 
              << ", value = " << c << endl;
    cout << "auto d = &i,  guess = " << "address of i" 
              << ", value = " << d << endl;
    cout << "auto e = &ci,  guess = " << "address of ci" 
              << ", value = " << e << endl;
    cout << "const auto f = ci,  guess = " << "0" 
              << ", value = " << f << endl;

    //second touch
    cout << "\nSecond Operations\n" <<endl;

    auto &g = ci;
    //auto &h = 42;  ref cannot bind to literal
    const auto &j = 42;

    cout << "auto &g = ci,  guess = " << "0" 
              << ", value = " << g << endl;
    cout << "const auto &j = 42,  guess = " << "42" 
              << ", value = " << j <<endl;

    //third touch
    cout << "\nThird Operations\n" <<endl;

    auto k = ci, &l =i;
    auto &m = ci, *p = &ci;
    auto &n = i; 
    auto *p2 = &ci;

    cout << "auto k = ci,  guess = " << "0" 
              << ", value = " << k << endl;
    cout << "auto &l = i,  guess = " << "0" 
              << ", value = " << l << endl;
    cout << "auto &m = ci,  guess = " << "0" 
              << ", value = " << m << endl;
    cout << "auto *p = &ci,  guess = " << "address of ci" 
              << ", value = " << p << endl;
    cout << "auto &n = i,  guess = " << "0" 
              << ", value = " << n << endl;
    cout << "auto *p2 = &ci,  guess = " << "address of ci" 
              << ", value = " << p2 << "\n" << endl;


    return 0;
}