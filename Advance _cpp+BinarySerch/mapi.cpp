#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,char>m;
    m[0]='a';
    m[1]='b';
    m[25]='z';

    cout<<m[23];
    return 0;
}