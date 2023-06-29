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
    void pushRear(int data)
    {
        //queue is full
        if(front == 0 && rear == size-1)
        {
            cout<<"Queue is overflow";
            return;
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
      void pushFront(int data)
    {
        //queue is full
        if(front == 0 && rear == size-1)
        {
            cout<<"Queue is overflow";
            return;
        }
        //single element or whenn you enter yout first element
        else if(front ==-1)
        {
            front = rear = 0;
            arr[front] = data;
        }
        //circular nature
        else if(front = 0 && rear != size-1)
        {
            front = size-1;
            arr[front] = data;
        }
        //normal condition
        else
        {
            front--;
            arr[rear] = data;
        }
    }
    void popFront()
    {
        //empty queue
        if(front == -1)
        {
            cout<<"Queue is underflow";
            return;
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
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void popRear()
    {
        //empty queue
        if(front == -1)
        {
            cout<<"Queue is underflow";
            return;
        }

        //single element
        else if(front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }

        //circular
        else if(rear == 0)
        {
            arr[rear] = -1;
            rear = size-1;
        }
        else
        {
            arr[rear] = -1;
           rear++;
        }

    }
};
int main()
{
    return 0;
}