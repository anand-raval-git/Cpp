#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    char count ='A';
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}