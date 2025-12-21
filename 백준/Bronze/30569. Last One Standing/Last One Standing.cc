#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int h1, d1, t1;
    int h2, d2, t2;

    cin >> h1 >> d1 >> t1;
    cin >> h2 >> d2 >> t2;

    int cnt1 = (h2 / d1) - 1;
    if (h2 % d1 != 0) {
        cnt1++;
    }
    cnt1 *= t1;
    int cnt2 = (h1 / d2) - 1;
    if (h1 % d2 != 0) {
        cnt2++;
    }
    cnt2 *= t2;

    if (cnt1 < cnt2) {
        cout << "player one";
    } else if (cnt1 > cnt2) {
        cout << "player two";
    } else {
        cout << "draw";
    }
    return 0;
}