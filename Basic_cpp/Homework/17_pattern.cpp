#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    char ch='A';
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;

    }
}