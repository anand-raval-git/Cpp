#include<iostream>
using namespace std;
void num(int n[],int size)
{
    cout<<"Inside void"<<endl;
    n[0]=10;
    n[1]=20;
    for(int i=0;i<size;i++)
    {
        cout<<" "<<n[i];
    }
    cout<<"Void return"<<endl;
}
int main()
{
    int n[3]={1,2,3},size=3;
    num(n,size);
    cout<<"print main code"<<endl;    
    for(int i=0;i<size;i++)
    {
        cout<<" "<<n[i];
    }
}