#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    double temp;
    double prev;

    cin >> prev;
    while (1) {
        cin >> temp;
        if (abs(temp - 999.0) < __DBL_EPSILON__)
            break;
        cout << fixed << setprecision(2) << temp - prev << '\n';
        prev = temp;
    }
    return 0;
}