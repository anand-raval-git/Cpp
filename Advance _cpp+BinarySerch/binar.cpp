#include<iostream>
#include<vector>
using namespace std;
int findAns(vector<int>& arr,int& target,int s,int e)
{
    if(s>e)
    {
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    if(arr[mid]<target)
    {
        return findAns(arr,target,mid+1,e);
    }
    else
    {
        return findAns(arr,target,s,mid-1);
    }
}
int main()
{
    vector<int>arr{10,20,30,40,50,90};
    int target =50;
    int s=0;
    int e=arr.size();
    int ans = findAns(arr,target,s,e);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}