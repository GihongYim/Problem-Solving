#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    int c, d;

    cin >> a >> b;
    cin >> c >> d;

    int overlap = max(0, min(b, d) - max(a, c));
    int result = (b - a) + (d - c) - overlap;

    cout << result << endl;
    return 0;
}