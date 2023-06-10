#include<iostream>
using namespace std;
int findPivot(int arr[],int s,int e)
{
    int pivotIndex = s;
    int pivot = arr[s];

    int count = 0;
    for(int i =s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int rightPosition = s+count;
    swap(arr[pivotIndex],arr[rightPosition]);
    pivotIndex = rightPosition;

    int i =s;
    int j =e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
          if(i<pivotIndex && j>pivotIndex)
    {
        swap(arr[i],arr[j]);
    }
    }
    return pivotIndex;
}
void findSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }

    int p = findPivot(arr,s,e);
    findSort(arr,p+1,e);
    findSort(arr,s,p-1);
}
int main()
{
    int arr[] = {1,5,2,3,7,4};
    int n = 6;
    int s =0;
    int e =n-1;
    findSort(arr,s,e);
    for(int i =0;i<e;i++)
    {
        cout<<arr[i];
    }
    return 0;
}