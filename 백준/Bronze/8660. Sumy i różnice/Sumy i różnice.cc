#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;

    cin >> n;
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        long long tmp;
        cin >> tmp;
        if (tmp < 0) {
            cnt += (n - 1);
        }
    }
    cout << cnt << endl;
    return 0;
}