#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    long long x, y;

    cin >> n;

    vector<pair<long long, long long>> positionX(n);
    vector<pair<long long, long long>> positionY(n);
    vector<bool> visitedX(n, 0);
    vector<bool> visitedY(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        positionX[i] = {x, y};
        positionY[i] = {y, x};
    }
    

    sort(positionX.begin(), positionX.end());
    sort(positionY.begin(), positionY.end());

    long long total = 0;

    for (int i = 0; i < n - 1; i++) {
        if (visitedX[i] == false && positionX[i].first == positionX[i + 1].first) {
            visitedX[i] = true;
            visitedX[i + 1] = true;

            total += abs(positionX[i + 1].second - positionX[i].second);
        }
        if (visitedY[i] == false && positionY[i].first == positionY[i + 1].first) {
            visitedY[i] = true;
            visitedY[i + 1] = true;

            total += abs(positionY[i + 1].second - positionY[i].second);
        }
    }

    cout << total << '\n';
    return 0;
}