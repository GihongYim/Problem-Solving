#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, D, M;

    cin >> T >> D >> M;
    
    vector<int> y(M + 2);

    y[0] = 0;
    y[M + 1] = D;

    for (int i = 1; i <= M; i++) {
        cin >> y[i];
    }
    for (int i = 1; i <= M + 1; i++) {
        if (y[i] - y[i - 1] >= T) {
            cout << "Y\n";
            return 0;
        }
    }

    cout << "N\n";
    return 0;
}