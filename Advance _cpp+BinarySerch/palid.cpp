#include<iostream>
#include<string.h>
using namespace std;
bool findCheck(char arr[])
{
    int i=0;
    int n=strlen(arr);
    int j=n-1;
    while(i<=j)
    {
        if(arr[i]!=arr[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char arr[1000];
    cin>>arr;

    cout<<findCheck(arr);
    return 0;
}