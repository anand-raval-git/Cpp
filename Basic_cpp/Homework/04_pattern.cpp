#include<iostream>
using namespace std;
int main()
{
    int i=1,n,count=16;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<count;
            j++;
            count--;
        }
        cout<<endl;
        i++;
    }
}