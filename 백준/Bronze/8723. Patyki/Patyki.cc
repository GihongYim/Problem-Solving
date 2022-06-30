#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int temp;
    cin >> a >> b >> c;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a == b && b == c)
    {
        cout << 2 << '\n';
        return (0);
    }
    if (c * c == a * a + b * b)
    {
        cout << 1 << '\n';
        return (0);
    }

    cout << 0 << '\n';
    return (0);
}