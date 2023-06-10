#include<iostream>
using namespace std;
int fibo(int n)
{
    int a=0,b=1,c;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;

    cout<<fibo(n)<<endl;
}