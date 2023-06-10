#include<iostream>
using namespace std;
int main()
{
    int num =234;
    int n=3;
    int rem;
    int digit;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        digit = num%10;
        cout<<"Digit is"<<digit;
        ans = (ans*10)+digit;
        cout<<"Ans is"<<ans;
        num = num/10;
        cout<<"Num is"<<num<<endl;
    }
    cout<<ans<<endl;
    return 0;
}