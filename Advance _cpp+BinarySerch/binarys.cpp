#include<iostream>
#include<vector>
using namespace std;
int findNum(vector<int>arr)
{
    int s=0,e=arr.size()-1,mid=s+(e-s)/2;
    while(s<=e)
    {
        if(s==e)
        {
            return s;
        }
        else if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            {
                s=mid+2;
            }
            else
            {
                e=mid;
            }
        }
        else
        {
            if(arr[mid]==arr[mid-1])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int>arr{1,1,2,2,3,3,4,4,3,3,600,600,4};
    int ans=findNum(arr);

    cout<<"Ans is "<< ans <<" Index is"<< arr[ans];
    return 0;
}