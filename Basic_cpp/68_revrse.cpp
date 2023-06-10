#include<iostream>
using namespace std;
void swap(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{
    int arr[6]={0,1,2,3,4,5},brr[5]={0,1,2,3,4};

    swap(arr,6);
    swap(brr,5);

    printArray(arr,6);
    printArray(brr,5);

}