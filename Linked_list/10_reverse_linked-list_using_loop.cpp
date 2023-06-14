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
Node* reverse(Node*&head)
{
    Node*left = 0;
    Node*curr = head;
    while (curr!=NULL)
    {
        Node*right = curr->next;
        curr->next = left;
        left=curr;
        curr=right;
    }
    return left;
    
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

    first = reverse(first);
    cout<<endl;

    print(first);
    return 0;
}