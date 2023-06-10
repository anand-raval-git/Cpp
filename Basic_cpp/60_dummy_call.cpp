#include<iostream>
using namespace std;
int dummy(int n)
{
    n++;
    cout<<"Number is "<<n<<endl;;
}
int main()
{
    int n;
    cin>>n;
    dummy(n);

    cout<<"Is number "<<n<<endl;
}