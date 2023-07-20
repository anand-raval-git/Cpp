#include<iostream>
using namespace std;
void hapify(int arr[],int n,int i)
{
    int index = i;
    int left = 2*i;
    int right = 2*i+1;
    int largest = index;

    if(left<=n && arr[left]>arr[largest])
    {
        largest = left;
    }
    if(right<=n && arr[right]>arr[largest])
    {
        largest = right;
    }
    if(index != largest)
    {
        swap(arr[index],arr[largest]);
        index = largest;
        hapify(arr,n,index);
    }
}
void buildheap(int arr[],int n)
{
    for(int i=n/2;i>0;i--)
    {
        hapify(arr,n,i);
    }

}
void heapsort(int arr[],int n)
{
    int index = n;
    while(n!=1)
    {
        swap(arr[1],arr[index]);
        index--;
        n--;

        //hapify
        hapify(arr,n,1);
    }
}
int main()
{
    int arr[]={-1,12,56,43,6,78,87,5,44,3,23,32};
    int n =11;
    buildheap(arr,n);
    cout<<"Pritning heap"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing heap after sorting"<<endl;
    heapsort(arr,n);
        for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}