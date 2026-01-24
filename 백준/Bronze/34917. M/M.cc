#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;
        // all . characters
        vector<string> grid(N);
        for (int i = 0; i < N; ++i) {
            grid[i] = string(N, '.');
        }

        for (int i = 0; i < N; i++) {
            grid[i][0] = '#';
            grid[i][N - 1] = '#';
        }
        for (int i = 0; 2 * i < N; i++) {
            grid[i][i] = '#';
            grid[i][N - 1 - i] = '#';
        }

        for (int i = 0; i < N; i++) {
            cout << grid[i] << '\n';
        }
    }
    return 0;
}