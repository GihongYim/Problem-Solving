#include <bits/stdc++.h>
using namespace std;

struct Wave {
    int p, l, a;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, w;
    cin >> n >> w;

    vector<Wave> waves;

    for (int t = 1; t <= n; t++) {
        string q;
        cin >> q;

        if (q == "!") {
            int p, l, a;
            cin >> p >> l >> a;
            waves.push_back({p, l, a});   
        }
        else if (q == "?") {
            int x;
            cin >> x;

            long long sum = 0;

            for (auto &w : waves) {
                int d = x - w.p;
                if (d < 0 || d >= w.l) continue;

                if (d % 4 == 0) sum += w.a;
                else if (d % 4 == 2) sum -= w.a;
            }

            cout << sum << '\n';
        }
    }

    return 0;
}