#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long p1, q1, p2, q2;
    long long p, q;
    long long m;

    cin >> p1 >> q1 >> p2 >> q2;
    p = p1 * p2;
    q = q1 * q2;
    m = gcd(p, q);
    p /= m;
    q /= m;
    if (p % 2 == 0 && q == 1) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
    return 0;
}