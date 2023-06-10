#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, bit, res = 0;
    cin >> n;
    int i = 0;
    while (n != 0)
    {
        bit = n & 1;
        res = (bit * pow(10, i)) + res;
        n = n >> 1;
        i++;
    }
    cout << res;
}