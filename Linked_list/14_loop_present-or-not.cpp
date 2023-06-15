#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
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
bool checkLoop(Node*&head)
{
    Node*slow = head;
    Node*fast = head;
    if(head == NULL)
    {
        return false;
    }

    while(fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow = slow->next;
        }

        if(fast == slow)
        {
            return true;
        }   
    }
    return false;
}
int main()
{
    Node*first = new Node(10);
    Node*second = new Node(10);
    Node*third = new Node(10);
    Node*fourth = new Node(10);
    Node*five = new Node(10);
    Node*six = new Node(10);
    Node*seven = new Node(10);
    Node*eight = new Node(10);
    Node*nine = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = five;
    five->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = nine;
    nine->next = NULL;

    cout<<"Loop is present or not "<<checkLoop(first);
    return 0;
}