#include<iostream>
#include<string.h>
using namespace std;
void findSent(char sen[])
{
    int i=0;
    int n=strlen(sen);
    for(i=0;i<n;i++)
    {
        if(sen[i]==' ')
        {
            sen[i]='@';
        }
    }
    cout<<sen;
}
using namespace std;
int main()
{
    char sen[1000];
    cin.getline(sen,1000);

    findSent(sen);
    return 0;
}