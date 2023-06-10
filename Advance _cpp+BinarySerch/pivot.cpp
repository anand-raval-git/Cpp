#include<iostream>
#include<vector>
using namespace std;
int findAns(vector<int>arr)
{
    int s=0,e=arr.size()-1,mid=s+(e-s)/2;
    while(s<=e)
    {
        if(s==e)
        {
            return s;
        }
        else if(mid<=e && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(mid-1>=s && arr[mid-1]>arr[mid])
        {
            return mid-1;
        }
        else if(arr[s]>arr[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int>arr{9,10,2,4,6,8};
    int ans=findAns(arr);
    if(ans==-1)
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Index is "<<ans<<endl;
        cout<<"Value is "<<arr[ans]<<endl;
    }
    return 0;
}