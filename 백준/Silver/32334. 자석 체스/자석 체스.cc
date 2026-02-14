#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, D;
    cin >> N >> D;

    vector<vector<int>> m(N, vector<int>(N));
    vector<vector<int>> cnt(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (m[i][j] == 1) {
                for (int x = max(0, i - D); x <= min(N - 1, i + D); x++) {
                    for (int y = max(0, j - D); y <= min(N - 1, j + D); y++) {
                        cnt[x][y]++;
                    }
                }
            }
        }
    }

    int bestX = -1, bestY = -1;
    int minValue = INT_MAX;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (m[i][j] == 0) {
                if (cnt[i][j] == 0) {
                    cout << i + 1 << " " << j + 1 << "\n";
                    return 0;
                }
                if (cnt[i][j] < minValue) {
                    minValue = cnt[i][j];
                    bestX = i;
                    bestY = j;
                }
            }
        }
    }

    cout << bestX + 1 << " " << bestY + 1 << "\n";
    cout << minValue << "\n";

    return 0;
}
