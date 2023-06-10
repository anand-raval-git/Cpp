#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{5,4,3,2,1};
    int n=arr.size();
    int min=0;

    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}