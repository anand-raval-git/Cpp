#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cin>>n;

    for(row=0;row<n;row++)
    {
        for(col=0;col<row;col++)
        {
            cout<<" ";
        }
        for(col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}