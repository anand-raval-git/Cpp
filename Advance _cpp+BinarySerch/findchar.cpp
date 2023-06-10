#include<iostream>
#include<vector>
using namespace std;
void checkKey(string str,int n,char key,int i,vector<int>&arr)
{
    if(i>=n)
    {
        return ;
    }
    if(str[i] == key)
    {
        arr.push_back(i);
    }
    return checkKey(str,n,key,i+1,arr);
}
int main()
{
    string str = "Lovebabbar";
    int n =  str.length();
    char key = 'b';
    int i = 0;
    vector<int>arr;
    checkKey(str,n,key,i,arr);
   // cout<<"Ans is "<<ans<<endl;
    for(auto val:arr)
    {
        cout<<val<<endl;
    }
    return 0;
}