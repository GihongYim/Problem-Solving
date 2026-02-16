#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int h, m, s;

    cin >> h >> m >> s;

    s++;
    if (s == 60) {
        s = 0;
        m++;
    }
    if (m == 60) {
        m = 0;
        h++;
    }
    if (h == 24) {
        h = 0;
    }
    cout << setfill('0') << setw(2) << fixed << h;
    cout <<  ":" << setfill('0') << setw(2) << fixed << m << ":";
    cout << setfill('0') << setw(2) << fixed << s << "\n";

    return 0;
}