#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;

    cin >> N >> M;
    bool isPrime[2000001];
    fill(isPrime, isPrime + 2000001, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 2000000; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 2000000; j += i) {
                isPrime[j] = false;
            }
        }
    }

    if (1 + (N - 1) * M > 2000000) {
        cout << -1 << '\n';
    } else {
        int a = 1;
        while (1) {
            bool isValid = true;
            for (int i = 0; i < N; i++) {
                if (isPrime[a + i * M]) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) break;
            a++;
        }

        for (int i = 0; i < N; i++) {
            cout << a + i * M << ' ';
        }
    }

    cout << '\n';

    return 0;
}