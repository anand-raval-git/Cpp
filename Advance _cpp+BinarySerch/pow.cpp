#include<iostream>
#include<cmath>
using namespace std;
int powFind(int num)
{
    if(num==1) return 1;
    return 2*powFind(pow(2,num-1));
}
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int ans = powFind(num);

    cout<<ans<<endl;
    return 0;
}