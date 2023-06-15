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
bool checkCircular(Node*&head)
{
    Node*temp =head;
    while(temp)
    {
        if(temp->next == head)
        {
            return false;
        }
        temp = temp->next;
    }
    return true;
}
int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;
    third->next = first;

    bool ans = checkCircular(first);
    if(ans == false)
    {
        cout<<"It is circular form";
    }
    else
    {
        cout<<"It is not circular form ";
    }
    return 0;
}