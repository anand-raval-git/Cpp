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
void insertionHead(Node *&head,Node *&tail,int data)
{
     if(head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }
    Node *newNode = new Node(data);
    newNode->next =  head;
    head =newNode;
}
void insertionTail(Node *&tail,Node *&head,int data)
{
    if(head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
void insertAtposition(int data,int position,Node *&head,Node *&tail)
{
    if(head == 0)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    int i=1;
    Node *prev = head;
    while(i<position)
    {
        prev = prev->next;
        i++;
    }
    Node * curr = prev->next;
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode; 
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
    Node *tail = new Node();
    insertionHead(head,tail,10);
    insertionHead(head,tail,20);
    insertionHead(head,tail,30);
    insertionHead(head,tail,40);
    insertionHead(head,tail,50);
    insertionTail(tail,head,100);
    print(head);
    cout<<endl;
    insertAtposition(200,3,head,tail);
    print(head);
    return 0;
}