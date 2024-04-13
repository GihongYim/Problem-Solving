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

    if (a + b <= c) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

    return 0;
}