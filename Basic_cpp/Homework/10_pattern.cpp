#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;

    while(i<=n)
    {
        int j=i;
        while(j<i*2)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

}