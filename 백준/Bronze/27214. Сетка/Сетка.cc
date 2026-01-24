#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, w, h, t;
    cin >> k >> w >> h >> t;

    int H = h * k + (h + 1) * t;
    int W = w * k + (w + 1) * t;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (i % (k + t) < t || j % (k + t) < t)
                cout << '*';
            else
                cout << '.';
        }
        cout << '\n';
    }
}
