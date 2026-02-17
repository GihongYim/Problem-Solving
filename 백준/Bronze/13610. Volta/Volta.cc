#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double x, y;

    cin >> x >> y;

    double time = (x * y) / (y - x);

    cout << ceil(time / x) << '\n';

    return 0;
}