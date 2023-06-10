#include<iostream>
#include<string.h>
using namespace std;
void getUppercasee(char ch[])
{
    int n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        ch[i]=ch[i]-'a'+'A';
    }
}
int main()
{
    char ch[1000];
    cin.getline(ch,50);
    getUppercasee(ch);
    cout<<ch;
    return 0;
}