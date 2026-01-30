#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int T;
    int N;

    cin >> T;
    while (T--) {
        cin >> N;
        vector<int> c(N);
        for (int i = 0; i < N; ++i) {
            cin >> c[i];
            if (c[i] % 2 == 1) {
                c[i]++;
            }
        }

        int cnt = 0;
        while (1) {
            bool allSame = true;
            for (int i = 1; i < N; ++i) {
                if (c[i] != c[0]) {
                    allSame = false;
                    break;
                }
            }
            if (allSame) {
                break;
            }
            vector<int> give(N, 0);
            for (int i = 0; i < N; ++i) {
                give[i] = c[i] / 2;
            }
            for (int i = 0; i < N; ++i) {
                c[i] /= 2;
            }
            for (int i = 0; i < N; ++i) {
                c[(i + 1) % N] += give[i];
            }
            for (int i = 0; i < N; ++i) {
                if (c[i] % 2 == 1) {
                    c[i]++;
                }
            }
            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}