#include<iostream>
#include<vector>
using namespace std;
int firstSearch(vector<int>arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int target=4;
    int ans=0;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int finalSearch(vector<int>arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int target=4;
    int ans2=0;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            ans2=mid;
            s=mid+1;
        }
        else if(arr[mid]<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans2;
}
int main()
{
    vector<int>arr{1,3,4,4,4,4,4,4,4,6,7};
    int first=firstSearch(arr);
    int second=finalSearch(arr);
    int res=second-first+1;
    cout<<res;
    return 0;
}