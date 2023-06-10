#include<iostream>
using namespace std;
int main()
{
    int i=1,n,num;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        j=1,num=i-1;
        while(j<=i-1)
        {
            cout<<num;
            j++;
            num--;
        }
        cout<<endl;
        i++;
    }
}