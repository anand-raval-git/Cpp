#include<iostream>
using namespace std;
int findFactorial(int num)
{
    if(num==1) return 1;
    int chotiProblem=findFactorial(num-1);
    int badiProblem=num*chotiProblem;
    return badiProblem;
}
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int ans=findFactorial(num);
    cout<<ans;
    return 0;
}