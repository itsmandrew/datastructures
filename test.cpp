#include <string>
#include <iostream>
#include "LinkedList.h"

int main()
{
    SLinkedList<int> a;
    a.addFront(3);

    std::cout << a.front() << std::endl;
    return 0;
}