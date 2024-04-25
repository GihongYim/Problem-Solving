#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int x, y;

    cin >> x >> y;
    if (y <= x) {
        cout << x + y;
    } else {
        cout << y - x;
    }

    return 0;
}