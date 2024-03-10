#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

bool divisor[1000005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ll n;
    cin >> n;

    ll e = n;
    for (ll p = 2; p * p <= n; p++) {
        if (n % p == 0) e = e / p *(p - 1);
        while (n % p == 0) n = n / p;
    }
    if (n == 1) {
        cout << e << '\n';
    } else {
        cout << e / n * (n - 1) << '\n';;
    }
    return 0;
}