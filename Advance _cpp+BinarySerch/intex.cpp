#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int brr[]={3,4};
    vector<int>ans;

    for(int i=0;i<5;i++)
    {
        int element = arr[i];
        for(int j=0;j<2;j++)
        {
            if(element==brr[j])
            {
                ans.push_back(element);
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    return 0;
}