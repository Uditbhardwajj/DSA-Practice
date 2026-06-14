#include <iostream>
using namespace std;

class Node
{
public:
    int data;   // store data
    Node *next; // store add

    Node(int data1, Node *next1)
    { // constructor (jisse baar baar new node nhi bnani pade)
        data = data1;
        next = next1;
    }
};

int main()
{
    Node *second = new Node(12, nullptr);//creating a node 
    Node *first = new Node(42, second);
    Node *head = new Node(4, first);
    Node *temp = head;
    while (temp != nullptr)// traversing in LL for print the o/p
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}