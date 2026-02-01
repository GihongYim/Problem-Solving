#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    int A;
    cin >> N >> M;
    vector<vector<int>> q(N + 1, vector<int>(M + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> q[i][j];
        }
    }

    cin >> A;
    vector<int> colSum(M + 1, 0);
    for (int j = 1; j <= M; j++) {
        for (int i = 1; i <= N; i++) {
            colSum[j] += q[i][j];
        }
    }

    int maxSum = 0;
    for (int i = 1; i <= M - A + 1; i++) {
        int sum = 0;
        for (int j = i; j < i + A; j++) {
            sum += colSum[j];
        }
        maxSum = max(maxSum, sum);
    }
    cout << maxSum << "\n";
    return 0;
}