#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, c, d, q, r;
    int left, right;

    cin >> left >> right;

    a = 100 - left;
    b = 100 - right;
    c = 100 - (a + b);
    d = a * b;
    q = d / 100;
    r = d % 100;
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
    cout << c + q << ' ' << r << '\n';
    return 0;
}