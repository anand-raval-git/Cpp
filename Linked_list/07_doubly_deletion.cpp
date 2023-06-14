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
void insertAtHead(Node*&head,Node*&tail,int data)
{
    if(head == NULL)
    {
        Node*newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtTail(Node *&head,Node* &tail,int data)
{
    if(head==NULL)
    {
        Node *newNode = new Node(data);
        head =newNode;
        tail =newNode;
    }
    else
    {
        Node*newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void insertAtPosition(Node *&head,Node*&tail,int data,int position)
{
    if(head == 0)
    {
        Node *newNode = new Node();
        head =newNode;
        tail =newNode;
    }
    int len = findLength(head);
    if(position>len)
    {
        insertAtTail(head,tail,data);
        return;
    }
    int i =1;
    Node *prevNode = head;
    while(i<position-1)
    {
        prevNode = prevNode->next;
        i++;
    }
    Node *curr = prevNode->next;

    Node *newNode = new Node(data);
    prevNode->next = newNode;
    newNode->prev = prevNode;
    curr->prev = newNode;
    newNode->next=curr;
}
void deletion(Node *&head,Node *&tail,int position)
{
    if(head == NULL)
    {
        return;
    }
    if(head->next == NULL)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
        return;
    }
    int len = findLength(head);
    if(position == len)
    {
        Node*temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }
    int i=1;
    Node*left =head;
    while(i<position-1)
    {
        left = left->next;
        i++;
    }
    Node*curr = left->next;
    Node *right = curr->next;
    left->next = right;
    right->prev = left;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(first);
    cout<<endl;

    insertAtHead(head,tail,101);
    print(head);

    cout<<endl;
    insertAtTail(head,tail,1000);
    print(head);

    cout<<endl;
    insertAtPosition(head,tail,120,5);
    print(head);

    cout<<endl;
    deletion(head,tail,3);
    print(head);
    return 0;
}