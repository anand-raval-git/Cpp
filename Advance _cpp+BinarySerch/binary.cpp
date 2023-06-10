#include<iostream>
using namespace std;
int binarySerach(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid = (start/2)+(end/2);
    while(start<=end)
    {
        int element=arr[mid];
        if(element==target)
        {
            return mid;
        }
        else if(element<target)
        {
            start=mid+1;
        }
        else if(element>target)
        {
            end=mid-1;
        }
        mid=(start/2)+(end/2);
    }
    return -1;
}
int main()
{
    int arr[]={2,4,6,8,10,12,14,16};
    int size=8;
    int target=4;

    int indexFound = binarySerach(arr,size,target);
    if(indexFound==-1)
    {
        cout<<"Index not found"<<endl;
    }
    else
    {
        cout<<"Index found "<<indexFound<<endl;
    }
}