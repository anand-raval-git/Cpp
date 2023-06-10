#include<iostream>
#include<vector>
using namespace std;
void sortNum(vector<int>arr,int row,int size)
{
    int start = 0;
    int end = 8;
    int i=0;

    while(start<end)
    {
        if(arr[start]<0)
        {
            start++;
        }
        else if(arr[end]>0)
        {
            end--;
        }
        else
        {
            swap(arr[start],arr[end]);
        }
    }
    for(int j=0;j<arr.size();j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{
    vector<int>arr{1,3,-3,-43,45,2,44,-2,-4};
    sortNum(arr,3,2);
    return 0;
}