#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, T;

    cin >> A >> T;

    cout << max(10 + 2 * (25 - A + T), 0) << '\n';
    return 0;
}