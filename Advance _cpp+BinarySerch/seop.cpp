#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{10,1,7,6,9,14};
    int n=arr.size();
    int round;
    int j;
    for(round=1;round<n;round++)
    {
        int val=arr[round];
        for(j=round-1;j>=0;j--)
        {
            if(arr[j+1]>val)
            {
                arr[j]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=val;
    }

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}