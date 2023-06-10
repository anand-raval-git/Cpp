#include <iostream>
using namespace std;
int main()
{
    int m, n;

    cout << "Enter value of m" << endl;
    cin >> m;

    cout << "Enter value of n" << endl;
    cin >> n;

    char op;
    cout << "Enter op" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (m + n) << endl;
        break;

    case '-':
        cout << (m - n) << endl;
        break;

    case '*':
        cout << (m * n) << endl;
        break;

    case '/':
        cout << (m / n) << endl;
        break;

    case '%':
        cout << (m % n) << endl;
        break;

    default:
        cout << "Enter valid op" << endl;
    }
}