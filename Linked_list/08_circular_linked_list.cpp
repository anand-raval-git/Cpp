#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node*prev;
    Node()
    {
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data)
    {
        this->data  = data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(Node*&head)
{
    Node*temp = head;
    while(temp !=NULL)
    {
    cout<<temp->data;
    temp= temp->next;
    }
}
int main()
{
    Node* first  = new Node(10);
    Node* second = new Node(20);
    Node*third = new Node(30);
    Node* four = new Node(40);
    Node* head = first;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = four;
    four->prev = third;

    four->next=first;
    first->prev = four;

    print(head);
    return 0;
}