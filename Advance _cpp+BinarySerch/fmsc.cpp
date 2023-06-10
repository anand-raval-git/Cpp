#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>arr)
{
    int ans=0;

    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int n;

    cout<<"Enter size of array"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter element"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int find=findUnique(arr);
    cout<<find;
    return 0;
}