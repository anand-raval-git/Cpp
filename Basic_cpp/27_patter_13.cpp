#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    char start='A';
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<start;
            j++;
            start=start+1;
        }
        i++;
        cout<<endl;
    }
}