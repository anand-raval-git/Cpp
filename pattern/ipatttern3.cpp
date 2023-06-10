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
            if(row==0 || row==4 || row==5)
            {
                cout<<"*";
            }
            else if(col==0 || col==n-row-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}