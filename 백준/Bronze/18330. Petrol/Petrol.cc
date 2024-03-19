#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;
    int total = 0;

    cin >> n >> k;

    k += 60;

    if (n <= k) {
        cout << n * 1500 << '\n';
    } else {
        cout << k * 1500 + (n - k) * 3000 << '\n';
    }
    return 0;
}