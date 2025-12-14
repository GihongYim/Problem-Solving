#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long energy = 0;
    long long n;
    long long prevx;
    long long x;
    cin >> n;

    cin >> prevx;
    for (int i = 1; i < n; i++) {
        cin >> x;
        energy += pow(x - prevx, 2);
        prevx = x;
    }

    cout << energy << '\n';

    return 0;
}