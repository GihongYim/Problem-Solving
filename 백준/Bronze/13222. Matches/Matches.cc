#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, h;
    int diag;
    int len;

    cin >> n >> w >> h;

    diag = w * w + h * h;

    for (int i = 0; i < n; i++) {
        cin >> len;
        if (len * len <= diag) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}