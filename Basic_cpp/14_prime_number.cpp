#include<iostream>
using namespace std;
int main()
{
    int i=2,n,a,b;
    
    cout<<"Enter number"<<endl;
    cin>>n;

    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Not prime "<<i<<endl;
        }
        else
        {
            cout<<"Prime "<<i<<endl;
        }
        
        i++;
    }
    
}