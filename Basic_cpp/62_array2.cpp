#include<iostream>
using namespace std;
void num(int n[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<n[i]<<" ";
    }
}
int main()
{
    int numb[20]={0};
    num(numb,19);
    int res=sizeof(numb)/sizeof(int);
    cout<<res;
    return 0;
}