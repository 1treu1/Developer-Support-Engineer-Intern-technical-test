#include <iostream>
#include "doublyLinkedList.h"

using namespace std;

int main()
{
    doublyLinkedList dll;
    dll.add('L');
    dll.add('U');
    dll.add('I');
    dll.add('S');
    dll.add(' ');
    dll.add('M');
    dll.print();

    return 0;
}