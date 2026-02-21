#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<long long> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    if (K >= N) {
        cout << N << '\n';
        return 0;
    }

    vector<long long> gap;
    for (int i = 0; i < N - 1; i++) {
        gap.push_back(T[i + 1] - T[i] - 1);
    }

    sort(gap.begin(), gap.end(), greater<long long>());

    long long total = T[N - 1] + 1 - T[0];

    for (int i = 0; i < K - 1; i++) {
        total -= gap[i];
    }

    cout << total << '\n';
}