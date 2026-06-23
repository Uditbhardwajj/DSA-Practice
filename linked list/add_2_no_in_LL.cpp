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
    Node *second1 = new Node(2, nullptr);//creating a node 
    Node *first1 = new Node(8, second1);
    Node *head1 = new Node(4, first1);


       Node *second2 = new Node(3, nullptr);//creating a node 
    Node *first2 = new Node(6, second2);
    Node *head2 = new Node(9, first2);
    
    Node *temp1 = head1;
    Node *temp2 = head2;


    int carry=0;
    int sum=0;
    int digit=0;
    Node *dummy= new Node(0,NULL);
      Node *curr = dummy;
    while (temp1 != nullptr || temp2 != nullptr || carry )// traversing in LL for print the o/p
    
    {
        sum =carry;
    
            if (temp1) {
                sum += temp1->data;
                temp1 = temp1->next;
            }

            if (temp2) {
                sum += temp2->data;
                temp2 = temp2->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            curr->next = new Node(digit,NULL);
            curr = curr->next;
        
    }
    Node *ans = dummy->next;

    while (ans != nullptr)
    {
        cout << ans->data << " ";
        ans = ans->next;
    }

    return 0;
}


