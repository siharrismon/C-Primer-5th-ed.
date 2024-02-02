/*
 * Copy elements from a list<int> into two deque
 * one deque for odd, the other for even numbers.
 */

#include <list>
#include <deque>
#include <iostream>

void printQ(std::deque<int>);  // prints deque<int>

int main()
{
  std::list<int> ilist = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  std::deque<int> oddq, evenq;
  


  for (std::list<int>::iterator iter = ilist.begin(); 
       iter != ilist.end(); iter++)
  {
    if (*iter % 2 == 0)
      evenq.push_back(*iter);
    else
      oddq.push_back(*iter);    
  }

  printQ(oddq);
  printQ(evenq);

  return 0;
}

void printQ(std::deque<int> dq)
{
  for (auto print : dq) {
    std::cout << print << " ";
  }
  std::cout << std::endl;
}