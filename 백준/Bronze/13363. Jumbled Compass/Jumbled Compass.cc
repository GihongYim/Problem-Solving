#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n1, n2;
    cin >> n1 >> n2;

    int diff = n2 - n1;

    if (diff > 180) diff -= 360;
    if (diff < -180) diff += 360;

    if (diff == -180) diff = 180;

    cout << diff << '\n';
    return 0;
}