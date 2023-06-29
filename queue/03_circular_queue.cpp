#include<iostream>
#include<queue>
using namespace std;
class CirQueue
{
    int *arr;
    int size;
    int front;
    int rear;
    CirQueue(int size)
    {
        arr = new int[size];
        this->size = size;
        front =-1;
        rear = -1;
    }
    void push(int data)
    {
        //queue is full
        if(front == 0 && rear == size-1)
        {
            cout<<"Queue is overflow";
        }
        else if(rear == front-1)
        {
            cout<<"Queue is full";
        }
        //single element or whenn you enter yout first element
        else if(front ==-1 && rear ==-1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        //circular nature
        else if(rear == size-1 && front != 0 )
        {
            rear=0;
            arr[rear] = data;
        }
        //normal condition
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pop()
    {
        //empty queue
        if(front == -1)
        {
            cout<<"Queue is underflow";
        }

        //single element
        else if(front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }

        //circular
        else if(front == size-1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
};
int main()
{
    return 0;
}