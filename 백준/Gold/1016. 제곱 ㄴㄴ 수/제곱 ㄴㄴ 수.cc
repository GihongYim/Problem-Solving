#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
const ll MAX = 1010005;
ll m, n;
bool isPrime[MAX];
bool dbPrime[MAX];
vector<ll> sq;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> m >> n;
    fill(dbPrime, dbPrime + MAX, true);
    fill(isPrime, isPrime + MAX, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i <= n / i; i++) {
        if (isPrime[i]) {
            sq.push_back(i * i);
            for (ll j = i + i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }
    ll lower;
    for (int i = 0; i < sq.size(); i++) {
        lower = (m + sq[i] - 1) / sq[i] * sq[i];
        for (; lower <= n; lower += sq[i]) {
            dbPrime[lower - m] = false;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n - m + 1; i++) {
        if (dbPrime[i]) 
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}