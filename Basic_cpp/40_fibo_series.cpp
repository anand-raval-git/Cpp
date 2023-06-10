#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}