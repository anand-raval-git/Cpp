#include<iostream>
using namespace std;
int main()
{
    char ch='1';
    
    switch(ch)
    {
        case 1 : cout<<"First";
        break;

        case '1' : cout<<"Second";
        break;

        default : cout<<"This is default case";
    }
}