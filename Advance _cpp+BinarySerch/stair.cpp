#include<iostream>
using namespace std;
int stairFu(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return stairFu(n-1)+stairFu(n-2);
}
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int ans = stairFu(n);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}