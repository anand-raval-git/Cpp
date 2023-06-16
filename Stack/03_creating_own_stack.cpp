#include<iostream>
using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        top = -1;
        this->size = size;
    }

    void push(int data)
    {
        if(size>top-1)
        {
            //space available
            top++;
            arr[top] = data;
        }
        else
        {
            //stackoverflow
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop()
    {
         if(top == -1)
        {
            //there is no element in stack
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            top--;
        }
    }
    int getTop()
    {
        if(top == -1)
        {
            //empty stack
            cout<<"There is no element in stack"<<endl;
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        if(top ==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        return top+1;
    }
};
int main()
{
    Stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty())
    {
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"Size of stack : "<<s.getSize()<<endl;
    return 0;
}