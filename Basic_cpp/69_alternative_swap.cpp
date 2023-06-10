#include<iostream>
using namespace std;
void swap(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
        swap(arr[i],arr[i+1]);}
        }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{
    int arr[6]={0,1,2,3,4,5};
    int odd[5]={0,1,2,3,4};
    swap(arr,6);
    printArray(arr,6);
    swap(odd,5);
    printArray(odd,5);
}