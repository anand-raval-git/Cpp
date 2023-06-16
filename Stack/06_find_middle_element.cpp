#include<iostream>
#include<stack>
using namespace std;
void FindMiddleElement(stack<int>&s,int &totalsize)
{
    //base case
    if(s.size() == (totalsize/2)+1)
    {
        cout<<"Middle element is "<<s.top()<<endl;
        return;
    }

    //one case solved
    int temp = s.top();
    s.pop();

    //baki recursion dekh lega
    FindMiddleElement(s,totalsize);
    
    //backtraking
    s.push(temp);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int TotalSize = s.size();
    FindMiddleElement(s,TotalSize);
    return 0;
}