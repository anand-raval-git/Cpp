#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next = NULL;
    Node()
    {
        this->data = 0;
        this->next = 0;
    }
    Node(int data)
    {
        this->data=data;
        this->next=0;
    }

};
void insertion(Node *&head,int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head =newNode;
}
void print(Node* &head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{   Node *head = new Node();
    insertion(head,10);
    insertion(head,20);
    insertion(head,30);
    insertion(head,40);
    insertion(head,50);

    print(head);
    return 0;
}