#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int Target)
{
    //base condition
    if(s.empty())
    {
        s.push(Target);
        return;
    }

    //one case solved

    int Element = s.top();
    s.pop();

    //recursion dekh lega
    solve(s,Target);

    //backtracking
    s.push(Element);
}
void InsertAtBottom(stack<int>&s)
{
    if(s.empty())
    {
        cout<<"Stack is empty";
        return;
    }

    int Target = s.top();
    s.pop();
    solve(s,Target);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    InsertAtBottom(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}