#include<iostream>
#include<limits.h>
using namespace std;
void findMax(int arr[], int & maxi,int n,int i)
{
    if(i>=n)
    {
        return;
    }
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
    findMax(arr,maxi,n,i+1);
}
void findMini(int arr[],int & mini,int n,int i)
{
    if(i>=n)
    return;

    if(arr[i]<mini)
    {
        mini = arr[i];
    }
    findMini(arr,mini,n,i+1);

}
int main()
{
    int arr[7] = {10,20,40,50,30,90,70};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int n = 7;
    int i = 0;

    findMax(arr,maxi,n,i);
    findMini(arr,mini,n,i);
    cout<<"Maxi num is"<<maxi<<endl;
    cout<<"Minimum num is"<<mini<<endl;
    return 0;
}