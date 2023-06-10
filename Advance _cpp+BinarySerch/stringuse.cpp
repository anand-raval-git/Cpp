#include<iostream>
#include<string>
using namespace std;
bool compareString(string a,string b)
{
    if(a.length()!=b.length())
    {
        return false;
    }
    else
    {
        int j=0;
        for(int i=0;i<=a.length();i++)
        {
            if(a[i]!=b[i])
            {
                return false;
                break;
            }
            else
            {
                return true;
            }
        }
    }
}
int main()
{
    // string str;
    // cin>>str;
    // cout<<str.substr(0,6);
    string a="love";
    string b="love";
    // if(a.compare(b)==0)
    // {
    //     cout<<"Same";
    // }
    // else 
    // {
    //     cout<<"Not same";
    // }
    if(compareString(a,b)==1)
    {
        cout<<"Same";
    }
    else
    {
        cout<<"Not same";
    }
    return 0;
}