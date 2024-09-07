#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define MAXN 1000000
bool isPrime[1000001];
vector<long long> prime;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    fill(isPrime, isPrime + MAXN, true);
    for (long long i = 2; i<= MAXN; i++) {
        if (isPrime[i]) {
            prime.push_back(i);
            for (long long j = i + i; j < MAXN; j += i) {
                isPrime[j] = false;
            }

        }
    }

    int n;

    cin >> n;

    for (long long i = 0; i < n; i++) {
        long long code;
        cin >> code;
        bool isOk = true;
        for (auto p : prime) {
            if (code % p == 0) {
                isOk = false;
            }
        }
        if (isOk) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}