#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>n;

    for(row=0;row<n;row++)
    {
        for(col=0;col<n-row;col++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(col=0;col<2*row+1;col++)
        {
            if(row==n-1)
            {
                cout<<"*";
            }
            else if(row==0)
            {
                cout<<" ";
            }
            else
            {
            cout<<" ";
            }
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}