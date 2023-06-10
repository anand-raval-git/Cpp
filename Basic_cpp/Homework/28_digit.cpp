#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int digit;
        digit=n%10;
        n=n/10;
        cout<<digit<<endl;
        
    }
    
}