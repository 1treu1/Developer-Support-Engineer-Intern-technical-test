#include <iostream>
//#include "Node.h"
//#include "doublyLinkedList.h"

using namespace std;
struct Node
{
    int dato;
    Node *lefth;
    Node *right;
};

Node *createNode(int);
void insertNode(Node *&, int);
void showTree(Node *&, int);
bool search(Node *, int);
void main1();
Node *tree = NULL;

int main()
{
    main1();

    return 0;
}
void main1()
{
    int op, dato, count = 0;
    do
    {
        cout << "1. Insert a new node" << endl;
        cout << "2. Show tree" << endl;
        cout << "3. Search element on the tree" << endl;
        cout << "4. Exit" << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Insert one number" << endl;
            cin >> dato;
            insertNode(tree, dato);
            cout << "\n"
                 << endl;
            system("pause");
            break;
        case 2:
            cout << "Show Tree" << endl;
            showTree(tree, count);
            cout << "\n"
                 << endl;
            system("pause");
            break;
        case 3:
            cout << "Insert number to search" << endl;
            cin >> dato;
            if (search(tree, dato) == true)
            {
                cout << "\n The number " << dato << " is on the tree"
                     << endl;
            }
            else
            {
                cout << "Number no found" << endl;
            }
            cout << "\n"
                 << endl;
            system("pause");
            break;

        default:
            break;
        }

        // system("cls");

    } while (op != 4);
}
Node *createNode(int n)
{
    Node *newNode = new Node();
    newNode->dato = n;
    newNode->lefth = NULL;
    newNode->right = NULL;
    return newNode;
}
void insertNode(Node *&tree, int n)
{
    if (tree == NULL)
    {
        Node *newNode = createNode(n);
        tree = newNode;
    }
    else
    {
        int root = tree->dato;
        if (n < root)
        {
            insertNode(tree->lefth, n);
        }
        else
        {
            insertNode(tree->right, n);
        }
    }
}
void showTree(Node *&tree, int count)
{
    if (tree == NULL)
    {
        return;
    }
    else
    {
        showTree(tree->right, count + 1);
        for (int i = 0; i < count; i++)
        {
            cout << "  ";
        }
        cout << tree->dato << endl;
        showTree(tree->lefth, count + 1);
    }
}
bool search(Node *tree, int n)
{
    if (tree == NULL)
    { // If tree is void
        return false;
    }
    else if (tree->dato == n)
    {
        return true;
    }
    else if (n < tree->dato)
    {
        return search(tree->lefth, n);
    }
    else
    {
        return search(tree->right, n);
    }
}