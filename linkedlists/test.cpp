#include <string>
#include <iostream>
#include "LinkedList.h"

int main()
{
    SLinkedList<std::string> a;
    a.addFront("PENIS");

    std::cout << a.front() << std::endl;
    return 0;
}