#include<iostream>
using namespace std;
int main()
{
    int i=1,start,n;
    cin>>n;

    while(i<=n)
    {
        int j=1,start=i;
        while(j<=i)
        {
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
}