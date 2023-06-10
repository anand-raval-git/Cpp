#include<iostream>
using namespace std;
bool findBinary(int arr[][4],int r,int c,int target)
{
    int s=0,e=(c*r)-1,mid=s+(e-s)/2;
    while(s<=e)
    {
        int row=mid/c,col=mid%c;
        if(arr[row][col]==target)
        {
            cout<<"Row is" << row << "col is" << col<<endl;
            return true;
        }
        else if(arr[row][col]<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}
int main()
{
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row=5,col=4;
    int target=1;

    bool ans=findBinary(arr,row,col,target);
    if(ans)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}