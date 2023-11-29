#include <iostream>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll a, b;

    cin >> n;
    for (int test_case = 1; test_case <= n; test_case++) {
        cin >> a >> b;
        cout << a * b / gcd(a, b) << '\n';
    }
    return 0;
}