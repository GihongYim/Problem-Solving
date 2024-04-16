#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int s, a, b;

    cin >> s >> a >> b;

    s -= a;

    if (s <= 0) {
        cout << 250 << '\n';
        return 0;
    }

    if (s % b == 0) {
        cout << 250 + (s / b) * (100);
    } else {
        cout << 250 + (s / b + 1) * (100);
    }

    return 0;
}