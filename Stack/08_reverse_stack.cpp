#include<iostream>
#include<stack>
using namespace std;
void InsertAtBottom(stack<int>&s,int target)
{
    //base case
    if(s.empty())
    {
        s.push(target);
        return;
    }

    //ek case solve karo
    int element = s.top();
    s.pop();

    //baki recursion dekh lega
    InsertAtBottom(s,target);

    //backtracking
    s.push(element);
}
void reverse(stack<int>&s)
{
    //base case
    if(s.empty())
    {
        //stack khali ho gaya
        return;
    }

    //nahi pata
    int target = s.top();
    s.pop();
    //reverse
    reverse(s);

    //insert at bottom
    InsertAtBottom(s,target);
}
int main()
{
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    reverse(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}