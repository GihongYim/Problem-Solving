#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long p, q;
        char slash;
        cin >> p >> slash >> q;

        vector<int> path;

        while (!(p == 1 && q == 1)) {
            if (p < q) {
                q -= p;
                path.push_back(0);
            } else {
                p -= q;
                path.push_back(1);
            }
        }

        reverse(path.begin(), path.end());

        long long n = 1;
        for (int d : path) {
            n = (d == 0) ? n * 2 : n * 2 + 1;
        }

        cout << n << '\n';
    }
}
