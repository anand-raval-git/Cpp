#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;

    cin>>n;

    vector<int>brr(n,1);

    cout<<"Size of vector "<<brr.size()<<endl;
    cout<<"Capacity of vector "<<brr.capacity()<<endl;

    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i];
    }
    return 0;
}