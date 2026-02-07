#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;

long long modpow(long long a, long long e) {
    long long r = 1;
    while (e) {
        if (e & 1) r = r * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long x;
            cin >> x;
        }
    }

    vector<long long> fact(2*n + 1), invfact(2*n + 1);
    fact[0] = 1;
    for (int i = 1; i <= 2*n; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    invfact[2*n] = modpow(fact[2*n], MOD - 2);
    for (int i = 2*n; i > 0; i--) {
        invfact[i - 1] = invfact[i] * i % MOD;
    }

    auto comb = [&](int N, int R) {
        if (R < 0 || R > N) return 0LL;
        return fact[N] * invfact[R] % MOD * invfact[N - R] % MOD;
    };

    long long cnt1 = comb(2*n, n);

    long long cnt2 = (1LL * n * n) % MOD;

    cout << cnt1 << ' ' << cnt2 << '\n';
    return 0;
}
