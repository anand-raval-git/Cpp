#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
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
Node* reverse(Node*&head)
{
    Node*prev = NULL;
    Node*curr = head;
    Node*forward = curr->next;
    while(curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
 void print(Node*&head)
{
    Node*temp = head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node *solve(Node*&head1,Node*&head2)
{
     if(head1 == NULL)
    {
        return head2;
    }
    if(head2 == NULL)
    {
        return head1;
    } 
    //step-1:reverse both linkedlist
    head1 = reverse(head1);
    head2 = reverse(head2);
    //step-2:adding both linkedlist
    Node*ansHead = NULL;
    Node*ansTail = NULL;
    int carry = 0;
    while(head1 != NULL && head2 != NULL)
    {
        //calculate summ
        int sum = carry + head1->data +head2->data;
        //find digit for create node for
        int digit = sum%10;
        //calculating carry
        carry = sum/10;

        //create new node for digit
        Node*newNode = new Node(digit);
        //attach new node into answali node

        if(ansHead == NULL)
        {
            ansHead = newNode;
            ansTail = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1= head1->next;
        head2 = head2->next;
}
    //jab head1 head2 se badi ho
    while(head1!=NULL)
    {
        int sum = carry + head1->data;
        int digit = sum%10;
        carry = sum/10;
        Node*newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
         head1 = head1->next;
    }

    //jab head2 head1 se badi ho
    while(head2!=NULL)
    {
        int sum = carry + head2->data;
        int digit = sum%10;
        carry = sum/10;
        Node*newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode; 
         head2 = head2->next;
    }
    //carry bacha ho to usko use karna padega
    while(carry != 0)
    {
        int sum = carry;
        int digit = sum%10;
        carry = sum/10;
        Node*newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }
    //step-3:reverse the answer linkedlist
    ansHead = reverse(ansHead);
    return ansHead;
}
int main()
{
    Node*head1 = new Node(2);
    Node*second1 = new Node(4);
    head1->next = second1;

    Node*head2 = new Node(2);
    Node*second2 = new Node(3);
    Node*third2 = new Node(4);
    head2->next = second2;
    second2->next = third2;
    Node*ans = solve(head1,head2);
    print(ans);
    return 0;
}
