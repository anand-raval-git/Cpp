#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
unordered_map name;
void printSolve(vector<vector<int>>board,int n , int j ,int i)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j];
        }
        cout<<endl;
    }
}
bool isSafe(vector<vector<int>>board,int n,int i,int j)
{
    while(j>=0)
    {
        if(board[i][j]==1)
        {
            return false;
        }
        j--;
    }

     while(i>=0 && j>=0)
    {
        if(board[i][j]==1)
        {
            return false;
        }
        j--;
        i--;
    }

    while(i<n && j>=0)
    {
        if(board[i][j] == 1)
        {
            return false;
        }
        i++;
        j--;
    }
}
void solve(vector<vector<int>>board,int n ,int j)
{
    
int i;
    if(j >= n)
    {
        printSolve(board,n,j,i);
        return;
    }

    for(int row=0;row<n;row++)
    {
            if(isSafe(board,row,j,n))
            {
                board[i][j] = 1;
                solve(board,n,j+1);
                board[i][j] = 0;
            }
    }
}
int main()
{
    int n = 4;
    vector<vector<int>>board(n,vector<int>(n,0));
    solve(board,n,0);
    return 0;
}