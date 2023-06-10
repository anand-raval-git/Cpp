#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>n;

    for(row=0;row<n;row++)
    {
        for(col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        for(col=0;col<(2*row)+1;col++)
        {
            if(col==0 || col==2*row)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(row=0;row<n;row++)
    {
        for(col=0;col<row;col++)
        {
            cout<<" ";
        }
        for(col=0;col<2*n-2*row-1;col++)
        {
            if(col==0 || col==2*n-2*row-2)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}