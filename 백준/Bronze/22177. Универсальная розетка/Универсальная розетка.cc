#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, d;

    cin >> n >> d;

    vector<long long> x(n);
    vector<long long> y(n);
    vector<long long> t(n);

    for (long long i = 0; i < n; ++i) {
        cin >> x[i] >> y[i] >> t[i];
    }

    long long dd = d * d;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (t[i] == t[j]) continue;
            long long dx = x[i] - x[j];
            long long dy = y[i] - y[j];
            if (dx * dx + dy * dy == dd) {
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";

    return 0;
}