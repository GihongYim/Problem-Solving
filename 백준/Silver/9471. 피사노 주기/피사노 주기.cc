#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int p, n, m;
    cin >> p;

    for (int test_case = 0; test_case < p; ++test_case) {
        cin >> n >> m;

        int prev = 0;
        int cur = 1;
        int cnt = 0;

        do {
            int next = (prev + cur) % m;
            prev = cur;
            cur = next;
            cnt++;
        } while (!(prev == 0 && cur == 1));
        cout << n << ' ' << cnt << '\n';
    }

    return 0;
}