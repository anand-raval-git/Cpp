#include <iostream>
using namespace std;

int main()
{
  int col,row,n,sum=1;
  cin>>n;

  for(row=0;row<5;row++)
  {
    for(col=0;col<5-row;col++)
    {
        cout<<" ";
   }
   for(col=0;col<row+1;col++)
   {
    cout<<"*";
   }
   for(col=0;col<5-row;col++)
    {
        cout<<" ";
   }
   for(col=0;col<row;col++)
   {
    cout<<"*";
   }
   cout<<endl;
  }
}