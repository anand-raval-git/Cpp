#include<iostream>
using namespace std;
void printSubseq(string str,string output,int i)
{
    if(i>=str.length())
    {
        cout<<output<<endl;
        return;
    }

    printSubseq(str,output,i+1);
    output.push_back(str[i]);
    printSubseq(str,output,i+1);
}
int main()
{
    string str = "abc";
    string output;
    int i = 0;
    printSubseq(str,output,i);
    return 0;
}