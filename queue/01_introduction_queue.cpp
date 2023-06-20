#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //creation
    queue<int>q;

    //q is follow fifo order first in first out like when people standing outside of atm
    //q has two part 1.front 2.rear basically element insert with rear part and remove with front par


    //insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //size
    cout<<q.size()<<endl;

    //remove
    q.pop();

    //size
    cout<<q.size()<<endl;

    //isempty
    if(q.empty())
    {
        cout<<"Q is empty"<<endl;
    }
    else
    {
        cout<<"Q is not empty"<<endl;
    }

    //printing

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
