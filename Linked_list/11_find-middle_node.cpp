#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *getMid(Node*&head)
{
    if(head == NULL)
    {
        return head;
    }
    else if(head ->next == NULL)
    {
        return head;
    }
    else
    {
        Node*slow = head;
        Node*fast = head->next;

        while(slow != NULL && fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast=fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }
}
void print(Node*& head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *four = new Node(40);
    Node *five = new Node(50);
    Node *six = new Node(60);

    first->next = second;
    second->next= third;
    third->next=four;
    four->next= five;
    five->next= six;
    print(first);
    cout<<endl;
    cout<<"Middle is "<<getMid(first)->data<<endl;
    return 0;
}