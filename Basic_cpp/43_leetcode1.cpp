#include<iostream>
using namespace std;
int main()
{
    int n,pro=1,sum=0;
    cout<<"Enter number"<<endl;
    cin>>n;

    while(n!=0)
    {
        int digit = n%10;
        pro=pro*digit;
        sum+=digit;
        n=n/10;
    }
    int answer = pro - sum;
    cout<<answer;
    return answer;
}