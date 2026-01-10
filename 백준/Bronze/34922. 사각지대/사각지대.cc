#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double w, h;
    double r;

    cin >> w >> h;
    cin >> r;

    cout << w * h - r * r * M_PI / 4.0 << '\n';
    return 0;
}