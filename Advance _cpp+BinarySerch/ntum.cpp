#include<iostream>
using namespace std;
int findFib(int num)
{
    if(num==1) return 0;
    if(num==2) return 1;
    //if(num==3) return 1;
    return findFib(num-1)+findFib(num-2);
}
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int ans =findFib(num);
    cout<<ans<<endl;
    return 0;
}