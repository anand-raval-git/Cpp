#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    // int ans=(sizeof(arr)/sizeof(int));
     //cout<<arr.size()<<endl;
    //cout<<arr.capacity()<<endl;
    // cout<<ans<<endl;

    arr.push_back(5);
    arr.push_back(6);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }

    arr.pop_back();

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}