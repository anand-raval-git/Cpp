#include<iostream>
using namespace std;
int findsqurt(int n)
{
    int target=n;
    int s=0,e=n,mid=s+(e-s)/2,ans=-1;
    while(s<=e)
    {
        if(mid*mid==target)
        {
            return mid;
        }
        else if(mid*mid>target)
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
    return ans;
}
int main()
{
    int n;
    cout<<"Enter value of n is ";
    cin>>n;

    int res =findsqurt(n);
    cout<<"Ans is "<<res;

    double prec,finalans=res,step=0.1;
    cout<<"Enter float number"<<endl;
    cin>>prec;

    for(int i=0;i<prec;i++)
    {
        for(double j=finalans;j*j<=n;j=j+step)
        {
            finalans=j;
        }
        step=step/10;
    }
    cout<<finalans;
    return 0;
}