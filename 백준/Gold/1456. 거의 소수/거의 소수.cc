#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll unsigned long long
const int MAX = 100000005;
bool isPrime[MAX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll A, B;
    ll cnt = 0;
    
    cin >> A >> B;
    fill(isPrime, isPrime + MAX, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (ll i = 2; i <= B / i; i++) {
        if (isPrime[i]) {
            for (ll j = i + i; j <= B / j; j += i) {
                isPrime[j] = false; 
            }
        }
    }
    for (ll i = 2; i <= B / i; i++) {
        if (isPrime[i]) {
            ll num = i, n = 2;
            while (num <= B / i) {
                if (A <= num * i) cnt++;
                num *= i;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}