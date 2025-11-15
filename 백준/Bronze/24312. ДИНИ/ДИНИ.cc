#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> w(4);
    int total = 0;
    for (int i = 0; i < 4; ++i) {
        cin >> w[i];
    }

    int minDiff = 0x3f3f3f3f;

    for (int mask = 0; mask < 16; mask++) {
        int left = 0;
        int right = 0;

        for (int i = 0; i < 4; i++) {
            if (mask & (1 << i)) left += w[i];
            else right += w[i];
        }

        minDiff = min(minDiff, abs(left - right));
    }
    cout << minDiff << "\n";
    return 0;
}