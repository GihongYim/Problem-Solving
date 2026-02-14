#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long f[60];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= 55; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    long long a, b, x, y;
    cin >> a >> b >> x >> y;

    int n = 1;
    long long mn = min(a, b);
    long long mx = max(a, b);

    while (true) {
        if (f[n] == mn && f[n + 1] == mx) break;
        n++;
    }

    while (n > 1) {
        if (a > b) {
            if (x < f[n - 1]) {
                a = f[n - 1];
                n--;
            }
            else if (x >= f[n]) {
                x -= f[n];
                a = f[n - 1];
                n--;
            }
            else {
                break;
            }
        }
        else {
            if (y < f[n - 1]) {
                b = f[n - 1];
                n--;
            }
            else if (y >= f[n]) {
                y -= f[n];
                b = f[n - 1];
                n--;
            }
            else {
                break;
            }
        }
    }

    cout << n;

    return 0;
}