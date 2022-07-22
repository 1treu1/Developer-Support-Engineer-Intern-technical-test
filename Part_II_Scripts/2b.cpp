#include <iostream>
//#include "Node.h"
//#include "doublyLinkedList.h"

using namespace std;
struct Node
{
    int dato;
    Node *next;
};

void insert(Node *&, Node *&);

int main()
{
    Node *NewNode = new Node();
    Node *list = NULL;
    insert(NewNode, list);

    return 0;
}
void insert(Node *&NewNode, Node *&lista)
{
    Node *aux;
    cout << "Ingrese el dato" << endl;
    cin >> NewNode->dato;
    NewNode->next = NULL;
    if (lista == NULL)
    {
        lista = NewNode;
    }
    else
    {
        aux = lista;
        while (aux->next != NULL)
        {
            aux = aux->next;
        }
        aux->next = NewNode;
    }
    cout << "Elemento " << NewNode->dato << " correctamente añadido" << endl;
}