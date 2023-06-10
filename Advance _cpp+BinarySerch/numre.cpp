#include<iostream>
using namespace std;
void findNum(int num)
{
    if(num==0)return;
    findNum(num-1);
    cout<<num<<endl;
}
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    findNum(num);

    return 0;
}