#include<iostream>
using namespace std;
int bit(int m,int n)
{
    int ans=m&n;
    return ans;
}
int main()
{
    int m,n;
    cin>>m>>n;

    cout<<bit(m,n);
    return 0;
}