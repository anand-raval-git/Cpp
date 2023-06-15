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
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node*& head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int FindLength(Node*& head)
{
    Node*temp = head;
    int i=0;
    while(temp!=NULL)
    {
        temp = temp->next;
        i++;
    }
    return i;
}
Node *Reverse(Node *&head,int k)
{
    if(head == NULL)
    {
        return NULL;
    }
    int length = FindLength(head);
    if(k>length)
    {
        return head;
    }
        Node*left = NULL;
        Node*curr = head;
        Node*right = curr->next;
        int count=0;
        while(count<k)
        {
            right = curr->next;
            curr->next = left;
            left = curr;
            curr = right;
            count++;
        }
        if(right != NULL)
    {
                   head -> next = Reverse(right, k);
    }
     return left;
    
}
int main()
{
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(head);
    Node* newHead = Reverse(head,3);
    cout<<endl;
    print(newHead);
    return 0;
}