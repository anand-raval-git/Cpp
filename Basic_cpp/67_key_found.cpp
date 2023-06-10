#include<iostream>
using namespace std;
bool serch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={1,3,4,-5,6,87,6,67,83,7},size,key;

    cout<<"Enter size"<<endl;
    cin>>size;

    cout<<"Enter key"<<endl;
    cin>>key;

    bool found =serch(arr,size,key);

    if(found)
    {
        cout<<"Number is present"<<endl;
    }
    else
    {
        cout<<"Number is absent"<<endl;
    }
    
}