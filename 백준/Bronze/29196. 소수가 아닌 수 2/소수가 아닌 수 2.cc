#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double num;

    cin >> num;
    for (long long q = 1; q <= 1000000; q++) {
        // cout << abs((num * q) - (long long)(num * q + 0.000001)) << '\n';
        if (abs((num * q) - (long long)(num * q + 0.000001)) <= 0.0000011) {
            cout << "YES\n";
            cout << (long long)(num * q + 0.000001) << ' ' << q << '\n';
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}