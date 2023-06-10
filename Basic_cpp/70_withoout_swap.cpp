#include<iostream>
using namespace std;
void swap(int arr[],int size)
{
    int temp;
    for(int i=0;i<size;i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{
    int arr[6]={0,1,2,3,4,5};
    swap(arr,6);
    print(arr,6);
}