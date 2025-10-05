#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
    int user = 1;
    while (true) {
        cin >> L;
        if (L == 0) break;

        int N;
        cin >> N;

        cout << "User " << user++ << "\n";

        for (int i = 0; i < N; i++) {
            long long steps;
            cin >> steps;
            double dist = (steps * L) / 100000.0;
            cout << fixed << setprecision(5) << dist << "\n";
        }
    }

    return 0;
}
