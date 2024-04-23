#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n, k;

    cin >> n >> k;
    string s;

    for (int i = 1; i <= n; i++) {
        s = to_string(i);
        if (s.length() < k) {
            k -= s.length();
        } else {
            cout << s[k - 1] << '\n';
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}
