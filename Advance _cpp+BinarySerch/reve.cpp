#include<iostream>
using namespace std;
void findAra(char arr[])
{
    int i=0;
    int n=5;
    int j=n-1;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
     cout<<arr;
}
int main()
{
    char arr[1000];
    cin>>arr;

    cout<<arr<<endl;
    findAra(arr);
    cout<<arr;
    return 0;
}