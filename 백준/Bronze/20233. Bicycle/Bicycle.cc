#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, x, b, y, T;

    int aCost = 0;
    int bCost = 0;

    cin >> a >> x >> b >> y >> T;
    aCost = a + 21 * max(T - 30, 0) * x;
    bCost = b + 21 * max(T - 45, 0) * y;
    cout << aCost << ' ' << bCost << '\n';
    return 0;
}