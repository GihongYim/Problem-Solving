#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, c;

    cin >> a >> b >> c;

    int m = max(a, max(b, c));
    cout << m - a + m - b + m - c << '\n';

    return 0;
}