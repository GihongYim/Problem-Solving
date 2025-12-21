#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    int x, s;

    cin >> N;
    vector<pair<int, int>> cow(N);

    for (int i = 0; i < N; i++) {
        cin >> x >> s;
        cow[i].first = x;
        cow[i].second = s;
    }
    sort(cow.begin(), cow.end());
    int upperR = INT_MAX;
    
    for (int i = 0; i < N; i++) {
        if (cow[i].second == 0) {
            if (i > 0 && cow[i - 1].second == 1) {
                upperR = min(upperR, abs(cow[i].first - cow[i - 1].first) - 1);
            }
            if (i < N - 1 && cow[i + 1].second == 1) {
                upperR = min(upperR, abs(cow[i].first - cow[i + 1].first) - 1);
            }
        }
    }

    int count = 0;
    int last = -1;

    for (int i = 0; i < N; i++) {
        if (cow[i].second == 1) {
            if (last == -1 || cow[i].first - last > upperR)
                count++;
            last = cow[i].first;
        }
    }

    cout << count << "\n";
    return 0;
}