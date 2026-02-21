#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (!isPalindrome) {
        cout << n << '\n';
        return 0;
    }

    bool allSame = true;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            allSame = false;
            break;
        }
    }

    if (allSame) {
        cout << -1 << '\n';
    } else {
        cout << n - 1 << '\n';
    }

    return 0;
}