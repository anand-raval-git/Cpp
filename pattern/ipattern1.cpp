#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>n;
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}