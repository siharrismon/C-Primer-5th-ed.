/*
 * Header file for C++ Primer chapter 6
 *
 */



#ifndef CHAPTER6_H
#define CHAPTER6_H

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int fact(void);
double abs_val(double x);
size_t count_calls();
void pswap(int *p, int *q);

#endif
