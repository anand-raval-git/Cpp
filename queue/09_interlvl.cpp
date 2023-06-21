#include<iostream>
#include<queue>
using namespace std;
void interlvl(queue<int>&q)
{
    int n =  q.size();
    int k = n/2;
    int count = 0;
    queue<int>q2;

    //inserting in 2nd queue    
    while(!q.empty())
    {
        int element = q.front();
        q.pop();
        q2.push(element);
        count++;

        if(count == k)
        {
            break;
        }
    }

    while(!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();
        q.push(first);

        int second = q.front();
        q.pop();
        q.push(second);
    }

    if(n&1)
    {
       int element = q.front();
        q.pop();
        q.push(element);
    }
}
int main()
{
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    interlvl(q);
     while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
