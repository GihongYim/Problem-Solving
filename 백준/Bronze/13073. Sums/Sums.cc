#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        cout << n * (n + 1) / 2 << ' ';
        cout << n * (n + 1) - n << ' ';
        cout << n * (n + 1) << '\n';
    }

    return 0;
}


// sigma n = 1 to n = N 2n - 1;
// n(n + 1) - n
// sigma n = 1 to n = N 2n;
// n(n + 1)

