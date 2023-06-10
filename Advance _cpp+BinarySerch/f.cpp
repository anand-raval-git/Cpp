#include<iostream>
#include<vector>
using namespace std;
int findBinary(vector<int>arr,int size,int key)
{
    int start=0,end=arr.size()-1;
    int  element=(start+end)/2;
    while(start<=end)
    {
        if(key==arr[element])
        {
            return element;
        }
        else if(arr[element]>key)
        {
            end=element-1;  
        }
        else if(arr[element]<key)
        {
            start=element+1;
        }
        element=(start+end)/2;
    }
    return -1;
}
int main()
{
    vector<int>arr{1,2,3,4,5,6,7};
    int size=7,key=5;
    int res=findBinary(arr,size,key);
    cout<<res;
    return 0;
}