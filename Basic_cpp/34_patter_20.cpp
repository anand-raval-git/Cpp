#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=(n-i+j))
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
