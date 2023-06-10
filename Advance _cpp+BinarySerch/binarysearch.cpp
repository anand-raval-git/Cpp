#include<iostream>
#include<vector>
using namespace std;
int findBinary(vector<int>arr,int target)
{
    int s=0,e=arr.size(),mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        
         if(arr[mid-1]>=s && arr[mid-1]==target)
        {
            return mid-1;
        }
        
         if(arr[mid+1]<=e && arr[mid+1]==target)
        {
            return mid+1;
        }
    
         if(target<arr[mid])
        {
            e=mid-2;
        }
        
        else
        {
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int>arr{10,3,40,20,50,80,70};
    int target=70;

    int ans=findBinary(arr,target);
    cout<<"Element is "<<target<<" Index is "<<ans;
    return 0;
}