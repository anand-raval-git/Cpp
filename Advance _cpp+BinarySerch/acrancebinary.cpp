#include<iostream>
#include<vector>
using namespace std;
int findBinar(vector<int>arr,int target)
{
    int s=0,e=arr.size()-1,mid=s+(e-s)/2,ans=0;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target)
        {
            s=mid+1;
        }
        else if(arr[mid]>target)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    vector<int>arr{1,2,3,4,4,4,3,5};
    int target=4;

    int res=findBinar(arr,target);
    cout<<"Found "<<res;
    return 0;
}