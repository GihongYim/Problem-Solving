#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    long long n, m;

    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> m;
        m = m * (m + 1) / 2;
        n = (n - 1) * n / 2;
        cout << "Scenario #" << i << ":\n";
        cout << m - n << "\n\n";
    }
    return 0;
}