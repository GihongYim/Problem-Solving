#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    vector<double> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double cost = a[0];
    for (int i = 1; i < N; i++) {
        cost = (cost + a[i]) / 2.0;
    }

    cout << fixed << setprecision(10) << cost << '\n';
    return 0;
}