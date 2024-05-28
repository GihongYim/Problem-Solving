#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int m, n;

    cin >> m >> n;

    if (m == 1) {
        cout << n << '\n';
    } else if (n == 1) {
        cout << m << '\n'; 
    } else {
        cout << 2 * (m + n) - 4;
    }
    return 0;
}