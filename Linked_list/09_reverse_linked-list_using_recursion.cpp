#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node()
    {
        this->data = 0;
        this-> next =0;
    }
    Node(int data)
    {
        this->data = data;
        this->next = 0;
    }
};
void print(Node* &head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* reverse(Node*&left,Node*&curr)
{
    if(curr == NULL)
    {
        return left;
    }

    Node*right = curr->next;
    curr->next = left;

    reverse(curr,right);
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(31);
    Node *fifth = new Node(32);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    print(first);

    Node*left=NULL;
    Node*curr=first;

    first = reverse(left,curr);
    cout<<endl;

    print(first);
    return 0;
}