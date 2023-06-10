#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>n;

    for(row=0;row<n;row++)
    {
        for(col=0;col<row+1;col++)
        {
        if(row==2 && col==1 || row==3 && col==1 || row==3 && col==2)
        {
            cout<<" ";
        }
         else
        {
            cout<< col+1 ;
        }
        }
        cout<<endl;
    }
}
