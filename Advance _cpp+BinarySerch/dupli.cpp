#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5};
    vector<int>brr{9,3,4,10};
    vector<int>ans;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i]==brr[j])
            {
                brr[j]=INT_MIN;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0;i<4;i++)
    {
        if(brr[i]!=INT_MIN)
        ans.push_back(brr[i]);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    return 0;
}