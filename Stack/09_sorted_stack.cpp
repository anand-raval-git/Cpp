#include<iostream>
#include<stack>
using namespace std;
void InsertAtTarget(stack<int>&s,int &Target)
{
    //base case
    if(s.empty())
    {
        s.push(Target);
        return;
    }
    if(s.top()>=Target)
    {
        s.push(Target);
        return;
    }

    //ek case solved karo
    int Element = s.top();
    s.pop();

    //baki recursion dekh lega
    InsertAtTarget(s,Target);
    s.push(Element);
}

void sort(stack<int>&s)
{
    //base case
    if(s.empty())
    {
        return;
    }

    //ek case solve karo
    int element = s.top();
    s.pop();

    //baki recursion dekh lega
    sort(s);

    InsertAtTarget(s,element);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(30);
    s.push(50);
    s.push(20);
    s.push(60);
    sort(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}