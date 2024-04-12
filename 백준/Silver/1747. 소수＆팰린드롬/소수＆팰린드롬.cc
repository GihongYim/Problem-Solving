#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

const int MAX = 1100000;
bool isPrime[MAX];

bool palindrome(ll n) {
    string str;

    str = to_string(n);
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll N;

    cin >> N;
    fill(isPrime, isPrime + MAX, true);

    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            for (ll j = i + i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (ll i = N; i <= MAX; i++) {
        if (isPrime[i] && palindrome(i)) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}