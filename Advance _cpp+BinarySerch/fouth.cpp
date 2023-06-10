#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr={10,20,30,40,50,60,70};
    int sum=100;

    for(int i=0;i<arr.size();i++)
    {
         for(int j=i+1;i<arr.size();j++)
    {

      for(int k=j+1;i<arr.size();k++)
    {

      for(int l=k+1;i<arr.size();l++)
    {
        if(arr[i]+arr[j]+arr[k]+arr[l]==sum)
        {
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[l]<<endl;
        }
    }   
    }   
    }
    }
    return 0;
}