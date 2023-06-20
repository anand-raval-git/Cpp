#include<iostream>
#include<queue>
using namespace std;
class Queue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = 0;
        rear = 0;
    }

    //insertion
    void push(int data)
    {
        if(rear == size)
        {
            cout<<"Queue is full";
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    //remove
    void pop()
    {
        if(front == rear)
        {
            cout<<"Queue is underflow";
        }
        else
        {
            arr[front] = -1;
            front++;
            if(front == rear)
            {
                front = 0;
                rear =0;

            }
        }
    }
    int getFront()
        {
            return arr[front];
        }
    int getSize()
    {
        return rear - front;
    }
    bool isEmpty()
    {
        if(front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Queue q (10);
     //insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //size
    cout<<q.getSize()<<endl;

    //remove
    q.pop();

    //size
    cout<<q.getSize()<<endl;

    //isempty
    if(q.isEmpty())
    {
        cout<<"Q is empty"<<endl;
    }
    else
    {
        cout<<"Q is not empty"<<endl;
    }

    //printing

    while(!q.isEmpty())
    {
        cout<<q.getFront()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}