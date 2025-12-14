#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int num;

    while (1) {
        cin >> n;

        if (n == 0) break;

        cout << n << " => " << n * n - n + 1 << '\n';

    }

    return 0;
}