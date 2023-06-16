#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //creation
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //remove lifo(last in first out)
    st.pop();

    //see top element in stack
    cout<<"Top element : "<<st.top()<<endl;

    //check size
    cout<<"Total element of stack is "<<st.size()<<endl;

    //is stack empyty
    if(st.empty())
        cout<<"Stack is empty";
    else
        cout<<"Stack is not empty";
    return 0;
}