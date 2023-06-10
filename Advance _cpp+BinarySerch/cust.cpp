#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(char a,char b)
{
    return a>b;
}
bool comp(int a , int b)
{
    return a>b;
}
int main()
{
    string s="Love";
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
    vector<int>v{5,2,3,1,4};
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}