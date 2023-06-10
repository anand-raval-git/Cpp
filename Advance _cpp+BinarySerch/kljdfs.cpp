#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void solve(vector<int>&arr,int & maxi ,int i,int sum)
{
    if(i>=arr.size())
    {
        maxi = max(sum,maxi);
        return ;
    }
    solve(arr,maxi,i+2,sum+arr[i]);
    solve(arr,maxi,i+1,sum);
}
int main()
{
    vector<int>arr{1,2,3,4};
    int maxi = INT_MIN;
    int i=0;
    int sum=0;
    solve(arr,maxi,i,sum);
    cout<<maxi;
    return 0;
}