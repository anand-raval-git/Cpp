#include<iostream>
using namespace std;
class Stack
{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if(top2-top1 == 1)
        {
            //stack is full
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void pop1()
    {
        if(top1 == -1)
        {
            //empty stack
            cout<<"Stack underflow";
        }
        else
        {
           /*only for understanding*/ arr[top1] = 0;
            top1--;
        }
    }
    
    void push2(int data)
    {
        
        if(top2-top1 == 1)
        {
            //stack is full
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }
    void pop2()
    {
        
        if(top2 == size)
        {
            //empty stack
            cout<<"Stack underflow";
        }
        else
        {
            /*only for understanding*/ arr[top2] = 0;
            top2++;
        }
    }
    //print is only for understanding
    void print()
    {
        cout<<"Top1 : "<<top1<<endl;
        cout<<"Top2 : "<<top2<<endl;

        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }   
};
int main()
{
    Stack s(10);
    //for top1
    s.push1(10);
    s.print();
    
    s.push1(20);
    s.print();
    
    s.push1(30);
    s.print();
    
    s.push1(40);
    s.print();
    
    s.push1(50);
    s.print();
    
    //for  top2
    s.push2(110);
    s.print();
    
    s.push2(120);
    s.print();
    
    s.push2(130);
    s.print();
    
    s.push2(140);
    s.print();

    s.pop1();
    s.print();
    return 0;
}