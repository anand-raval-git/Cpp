#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,5};
    vector<int>brr{5,4};

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<brr.size();j++)
        {
            int sum=9;
            int ans=arr[i]+brr[j];
            if(ans==sum)
            {
                cout<<arr[i]<<"+"<<brr[j]<<"="<<"9"<<endl;  
            }
        }
    }
    return 0;
}