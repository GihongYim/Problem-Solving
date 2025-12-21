#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y;
    int n;
    int minDist = INT_MAX;
    int taxiX, taxiY;
    int resultX, resultY;

    cin >> x >> y;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> taxiX >> taxiY;
        int dist = abs(x - taxiX) + abs(y - taxiY);
        if (dist < minDist) {
            minDist = dist;
            resultX = taxiX;
            resultY = taxiY;
        }
    }

    cout << resultX << " " << resultY << "\n";

    return 0;
}