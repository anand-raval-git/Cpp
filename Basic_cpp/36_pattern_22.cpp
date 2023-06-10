#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        j=1;
        while(j<=i-1)
        {
            cout<<"*";
            j++;
        }
        j=1;
        while(j<=i-1)
        {
            cout<<"*";
            j++;
        }
        j=1;
        int num=n-i+1;
        while(j<=n-i)
        {
            cout<<num;
            num--;
            j++;
        }
        j=1;
        while(j<=1)
        {
            cout<<1;
            j++;
        }

        cout<<endl;
        i++;
    }
}