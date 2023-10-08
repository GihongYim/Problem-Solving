#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int total = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        total += (i * (i + 1) / 2) + i * (i + 1);
    }
    cout << total << '\n';
    return 0;
}