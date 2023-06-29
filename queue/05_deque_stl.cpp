#include<iostream>
#include<deque>
using namespace std;
int main()
{
    //creation
    deque<int>q;

    //q is follow fifo order first in first out like when people standing outside of atm
    //q has two part 1.front 2.rare basically element insert with rare part and remove with front par


    //insertion
    q.push_front(10);
    q.push_front(20);
    q.push_back(30);
    q.push_back(40);

    //size
    cout<<q.size()<<endl;

    //remove
    q.pop_front();

    //size
    cout<<q.size()<<endl;

    q.pop_back();
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

    cout<<"Front : "<<q.front()<<endl;
    cout<<"Back : "<<q.back()<<endl;

    return 0;
}
