#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> colSum(M + 1, 0);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            int x;
            cin >> x;
            colSum[j] += x;
        }
    }

    int A;
    cin >> A;

    vector<long long> prefix(M + 1, 0);
    for (int j = 1; j <= M; j++) {
        prefix[j] = prefix[j - 1] + colSum[j];
    }

    long long ans = 0;

    for (int l = 1; l + A - 1 <= M; l++) {
        long long curr = prefix[l + A - 1] - prefix[l - 1];
        ans = max(ans, curr);
    }

    cout << ans << '\n';
    return 0;
}
