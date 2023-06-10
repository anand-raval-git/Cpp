#include<iostream>
using namespace std;
int main()
{
    int row,n,col;
    cin>>n;

    for(row=0;row<n;row++)
    {
        for(col=0;col<n-row;col++)
        {
            if(row==1 && col==1 || row=1 && col==2 || row==2 && col==1)
            {
                cout<<" ";
            }
            else
            {
            cout<<col+1;
            }
        }
        cout<<endl;
    }
}
