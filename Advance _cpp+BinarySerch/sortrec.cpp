#include<iostream>
#include<vector>
using namespace std;
bool isSort(vector<int>& arr,int& n,int i)
{
    if(i == n-1)
    {
        return true;
    }
    if(arr[i+1]<arr[i])
    {
        return false;
    }
    return isSort(arr,n,i+1);
}
int main()
{
    vector<int>arr={10,20,30};
    int n  = arr.size();
    int i=0;
    bool ans = isSort(arr,n,i);
    if(ans == true)
    {
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Not sorted"<<endl;
    }
    return 0;
}