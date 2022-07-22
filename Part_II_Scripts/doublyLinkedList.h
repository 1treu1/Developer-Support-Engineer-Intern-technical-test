#include "Node.h"
#include <iostream>

using namespace std;

class doublyLinkedList
{
private:
    Node *start;
    Node *end;

public:
    doublyLinkedList();
    void add(char n);
    void print();
};

doublyLinkedList::doublyLinkedList()
{
    start = NULL;
    end = NULL;
}
void doublyLinkedList::add(char n)
{
    Node *newElement = new Node();
    newElement->dato = n;
    if (start == NULL)
    {
        start = newElement;
        end = newElement;
        newElement->lefth = NULL;
        newElement->right = NULL;
    }
    else
    {
        newElement->lefth = end;
        end->right = newElement;
        end = end->right;
        end->right = NULL;
    }
}

void doublyLinkedList::print()
{
    Node *reco = start;
    while (reco != NULL)
    {
        cout << reco->dato << endl;
        reco = reco->right;
    }
}
