#include<iostream>
using namespace std;
void tranPose(int arr[][3],int row, int col,int swap[][3])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            swap[j][i]=arr[i][j];
        }
    }
}
void printArray(int swap[][3],int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<swap[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int swap[3][3];
    int row=3;
    int col=3;

    tranPose(arr,row,col,swap);
    printArray(swap,row,col);
    return 0;
}