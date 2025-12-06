#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    int aH = s1[0] - '0';
    int bA = s1[2] - '0';
    int bH = s2[0] - '0';
    int aA = s2[2] - '0';

    int x = bA - aA;
    if (x < 0) {
        cout << "NO\n";
        return 0;
    }

    int D = (bA + bH) - (aH + aA);
    int y = x - D;

    if (y < 0) cout << "NO\n";
    else cout << "YES\n";
}
