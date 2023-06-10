#include<iostream>
using namespace std;
int binarySearch(int dividend,int divisor)
{
    int s=0,e=abs(dividend),ans=0,mid=s+(e-s)/2;
    while(s<=e)
    {
        if(abs(divisor*mid)==abs(dividend))
        {
            ans=mid;
            break;
        }
        else if(abs(divisor*mid)>abs(dividend))
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if((dividend>0 && divisor>0) || (dividend<0 && divisor<0))
    {
    return ans;
    }
    else
    {
    return -ans;
    }
}
int main()
{
    int dividend=36;
    int divisor=-6;

    int fin=binarySearch(dividend,divisor);
    cout<<fin;
    return 0;
}