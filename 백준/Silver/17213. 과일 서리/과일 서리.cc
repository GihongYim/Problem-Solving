#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;

    cin >> N >> M;

    // Compute (M - 1) C (N - 1)
    long long numerator = 1;
    long long denominator = 1;
    for (int i = 0; i < N - 1; ++i) {
        numerator *= (M - 1 - i);
        denominator *= (i + 1);
    }
    cout << numerator / denominator << '\n';
    

    return 0;
}