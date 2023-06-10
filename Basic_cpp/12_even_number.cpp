#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"Enter number"<<endl;
    cin>>n;

    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        
        }
        i++;
    }
    cout<<sum<<endl;
}