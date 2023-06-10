#include<iostream>
using namespace std;
void findNum(int num)
{
    if(num==0) return;
    int ans = num%10;
    int per = num/10;
    return findNum(ans);
}
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    findNum(num);
    return 0;
}