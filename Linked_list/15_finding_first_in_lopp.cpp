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
Node* firstinLoop(Node*&head)
{
    Node*slow = head;
    Node*fast = head;
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
                slow=slow->next;
            }
            if(fast == slow)
            {
                slow=head;
                break;
            }
        }
        while(fast!=slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;

}
int main()
{
    Node*first = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(30);
    Node*fourth = new Node(40);
    Node*five = new Node(50);
    Node*six = new Node(60);
    Node*seven = new Node(70);
    Node*eight = new Node(80);
    Node*nine = new Node(90);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = five;
    five->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = nine;
    nine->next = five;

    cout<<firstinLoop(first)->data<<endl;
    return 0;
}