#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,digit,i=0,res=0;
    cin>>n;

    while(n!=0)
    {
        digit=n%10;
        if(digit==1)
        {
            res=res+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<res;
}