#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    long long totalArea = 0;

    for (int t = 1; t <= N; t++) {
        int P;
        cin >> P;

        vector<pair<long long, long long>> pos(P);
        for (int i = 0; i < P; i++) {
            cin >> pos[i].first >> pos[i].second;
        }

        long long area = 0;
        for (int i = 0; i < P; i++) {
            area += (pos[i].first * pos[(i + 1) % P].second - pos[(i + 1) % P].first * pos[i].second);
        }
        totalArea += llabs(area);
    }

    cout << totalArea / 2 << '\n';
    return 0;
}