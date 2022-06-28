#include <iostream>
using namespace std;

int main()
{
    unsigned long long a, b;

    cin >> a >> b;

    if (a % 2 == 1 && b % 2 == 1)
    {
        if (a > b)
        {
            cout << b << '\n';
        }
        else
        {
            cout << a << '\n';
        }
    }
    else
    {
        cout << 0 << '\n';
    }
    return (0);
}