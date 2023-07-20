#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //creating priority queue
    priority_queue<int,vector<int>,greater<int>>pq;

    //inserting value in pq
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout<<"Top element is "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element is "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element is "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element is "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element is "<<pq.top()<<endl;
    pq.pop();
    cout<<"Pq size is "<<pq.size()<<endl;

    if(pq.empty())
    {
        cout<<"Pq is empty"<<endl;
    }
    else
    {
        cout<<"Pq is not empty"<<endl;
    }
    return 0;
}