#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    vector<int> H(N);
    for (int i = 0; i < N; ++i) cin >> H[i];

    long long pushes = 1;
    for (int i = 0; i + 1 < N; ++i) {
        if (H[i] <= H[i + 1]) ++pushes;
    }
    cout << pushes << '\n';
    return 0;
}