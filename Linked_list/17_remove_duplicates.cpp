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
void RemoveDuplicate(Node*&head)
{
    //null node
    if(head==NULL)
    {
        return;
    }
    //one node next is null
    if(head->next== NULL)
    {
        return;
    }
    //>1
    Node*curr = head;
    while(curr!=NULL)
    {
        if((curr->next!=NULL)&& curr->data == curr->next->data)
        {
            Node*temp = curr->next;
            curr->next = curr->next->next;
            temp->next=NULL;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
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
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(3);
    Node *fifth = new Node(4);
    Node *six = new Node(4);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    print(first);
    cout<<endl;
    RemoveDuplicate(first);
    print(first);
    return 0;
}