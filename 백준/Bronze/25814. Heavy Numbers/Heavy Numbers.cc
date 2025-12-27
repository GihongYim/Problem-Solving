#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    int sumA = 0, sumB = 0;

    cin >> a >> b;

    for (char c : a) {
        sumA += c - '0';
    }
    for (char c : b) {
        sumB += c - '0';
    }

    if (sumA * a.length() > sumB * b.length()) {
        cout << 1 << "\n";
    } else if (sumA * a.length() < sumB * b.length()) {
        cout << 2 << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}