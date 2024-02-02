/*
 *  Copy a vector with ints 1 - 9 inclusive into
 *  three containers using:
 *  1 - inserter
 *  2 - back_inserter
 *  3 - front_inserter
 */

#include <iostream>
#include <vector>
#include <list>

void printList(std::list<int>);

int main()
{
    std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> list1, list2, list3;

    copy(ivec.begin(), ivec.end(), inserter(list1, list1.begin()));
    printList(list1);

    copy(ivec.begin(), ivec.end(), back_inserter(list2));
    printList(list2);

    copy(ivec.begin(), ivec.end(), front_inserter(list3));
    printList(list3);

}

void printList(std::list<int> list)
{
    for (int item : list)
    {
        std::cout << item << ' ';
    }
    std::cout << std::endl;
}