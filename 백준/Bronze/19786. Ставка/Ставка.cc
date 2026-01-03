#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    int A, C;
    int r, g, b;

    cin >> t;

    while (t--) {
        cin >> A >> C;
        cin >> r >> g >> b;

        int maxPrize = 0;
        string color = "RED";
        int prize;

        r += 1;
        prize = A * (r * r + g * g + b * b) + C * min({r, g, b});
        if (prize > maxPrize) {
            maxPrize = prize;
            color = "RED";
        }
        r -= 1;

        g += 1;
        prize = A * (r * r + g * g + b * b) + C * min({r, g, b});
        if (prize > maxPrize) {
            maxPrize = prize;
            color = "GREEN";
        }
        g -= 1;

        b += 1;
        prize = A * (r * r + g * g + b * b) + C * min({r, g, b});
        if (prize > maxPrize) {
            maxPrize = prize;
            color = "BLUE";
        }
        b -= 1;
        cout << color << "\n";
    }
    return 0;
}