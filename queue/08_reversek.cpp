#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverse(queue<int>&q,int k)
{
    stack<int>s;
    int count = 0;
    int n = q.size();

    if(k <= 0 || k>n) return;
    //inserting k element in stack from queue
    while (!q.empty())
    {
        int element = q.front();
        q.pop();

        s.push(element);
        count++;
        if(count == k)
        {
            break;
        }
    }

    //inserting k element in queue from stack with reverse order
    while(!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }

    //push n-k element in queue from front to back
    count = 0;
    while(!q.empty() && n-k!=0)
    {
        int element = q.front();
        q.pop();
        q.push(element);
        count++;

        if(count == n-k)
        {
            break;
        }
    }
}
int main()
{
    queue<int>q;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverse(q,3);
    
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}