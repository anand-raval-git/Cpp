#include<iostream>
using namespace std;
void sum(int size,int num[])
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+num[i];
    }
    cout<<sum;
}
int main()
{
    int size,num[1000];

    cout<<"Enter size"<<endl;
    cin>>size;

    cout<<"Enter number"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    sum(size,num);
}