#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    int na, nb;
    int cnt = 0;


    cin >> a >> b;
    while (1) {
        if (a == b) {
            break;
        }
        na = max(a, b) - min(a, b);
        nb = min(a, b);
        a = na;
        b = nb;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}