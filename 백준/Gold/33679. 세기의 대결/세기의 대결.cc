#include <bits/stdc++.h>
using namespace std;

int computeMaxScore(vector<int>& a) {
    int n = a.size();
    int best = 0;
    for (int start = 0; start < n; start++) {
        vector<int> lis;
        for (int i = 0; i < n; i++) {
            int x = a[(start + i) % n];
            auto it = lower_bound(lis.begin(), lis.end(), x);
            if (it == lis.end()) lis.push_back(x);
            else *it = x;
        }
        best = max(best, (int)lis.size());
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int yj = computeMaxScore(a);
    int hg = computeMaxScore(b);

    if (yj > hg) cout << "YJ Win!\n";
    else if (hg > yj) cout << "HG Win!\n";
    else cout << "Both Win!\n";

    return 0;
}