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
int findLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
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
    if(position == 0)
    {
        insertionHead(head,tail,data);
    return;
    }
    int len = findLength(head);
     if(position == len)
    {
        insertionTail(head,tail,data);
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
void deleteNode(int position,Node *&head,Node*&tail)
{
    if(head == NULL)
    {
        cout<<"cannot delete node cause node is empty";
        return;
    }
    if(position == 1)
    {
        Node *temp =head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findLength(head);
    if(position==len)
    {
        int i = 1;
        Node *prev = head;
        while(i<position-1)
        {
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node *temp =tail;
        tail = prev;
        delete temp;
        return;
    }
    int i=1;
    Node *prev = head;
    while(i<position-1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}
int main()
{   Node *head = new Node();
    Node *tail = new Node();
    insertionHead(head,tail,10);
    insertionHead(head,tail,20);
    insertionHead(head,tail,30);
    insertionHead(head,tail,40);
    insertionHead(head,tail,50);
    //insertionTail(tail,head,100);
    print(head);
    cout<<endl;
    // insertAtposition(200,3,head,tail);
    // print(head);
    deleteNode(5,head,tail);
    print(head);
    return 0;
}