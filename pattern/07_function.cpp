#include<iostream>
using namespace std;
int add(int one,int two)
{
    return one+two;
}
int main()
{
    int a,b,sum;

    cin>>a>>b;

    sum=add(a,b);
    cout<<sum;
}