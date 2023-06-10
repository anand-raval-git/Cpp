#include<iostream>
using namespace std;
void findNum(int arr[])
{
    int start=0;
    int end=4;
    while(start<end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        else if(arr[end]==1)
        {
            end--;
        }
        else
        {
            swap(arr[start],arr[end]);
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={0,1,0,1,1};
    findNum(arr);
    return 0;
}