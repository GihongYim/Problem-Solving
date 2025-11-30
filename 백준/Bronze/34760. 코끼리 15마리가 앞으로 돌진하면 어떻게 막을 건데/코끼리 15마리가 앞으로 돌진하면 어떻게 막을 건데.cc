#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int maxIndex = 0;
    int maxSize = 0;

    vector<int> elephant(15);
    for (int i = 0; i < 15; ++i) {
        cin >> elephant[i];

        if (elephant[i] > maxSize) {
            maxSize = elephant[i];
            maxIndex = i;
        }
    }

    if (maxIndex == 14) {
        cout << maxSize << '\n';
    } else {
        cout << maxSize + 1 << '\n';
    }

    return 0;
}