#include<iostream>
using namespace std;
int main()
{
    int money,cash;

    cout<<"Enter money"<<endl;
    cin>>money;

    switch(money)
    {
        case 1000:cout<<money/1000<<endl;

        case 500:cout<<money/500<<endl;

        case 100:cout<<money/100<<endl;

        case 50:cout<<money/50<<endl;

        case 1:cout<<money/1<<endl;
    }
}