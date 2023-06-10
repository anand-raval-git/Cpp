#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;

    int digit,ans=0;

    while(num!=0)
    {
        digit=num%10;
        num=num/10;
        ans=(ans*10)+digit;
        cout<<ans<<endl;
    }
}