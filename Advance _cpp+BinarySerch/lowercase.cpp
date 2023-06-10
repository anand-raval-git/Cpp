#include<iostream>
#include<string.h>
using namespace std;
void getChar(char ch[])
{
    int n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        if(ch[i]>='A'&& ch[i]<='Z')
        {
            ch[i]=ch[i]-'A'+'a';
        }
    }
}
int main()
{
    char ch[1000];
    cin.getline(ch,50);
    getChar(ch);
    cout<<ch;
    return 0;
}