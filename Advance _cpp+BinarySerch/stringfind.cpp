#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sentance = "Hello ji  kaise h sare";
    string target = "ji";

    cout << sentance.find(target);
    return 0;
}