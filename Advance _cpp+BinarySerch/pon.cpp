#include<iostream>
using namespace std;
int main()
{
char a = 'a';
char *p = &a;

cout<<sizeof(p);
return 0;
}