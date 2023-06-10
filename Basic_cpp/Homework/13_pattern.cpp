#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        char ch=('A');
        while(j<=n)
        {
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
}