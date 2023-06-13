#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next =NULL;
        this->prev=NULL;
    }
};
void print(Node* &head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout<< temp->data <<" ";
        temp = temp->next;

    }
}
int findLength(Node *&head)
{
    Node *temp  = head;
    int length;
    while(temp != 0)
    {
        temp = temp->next;
        length++;   
    }
    return length;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(first);
    return 0;
}