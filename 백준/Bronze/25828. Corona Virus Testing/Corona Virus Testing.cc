#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int g, p, t;

    cin >> g >> p >> t;
    if (g + p * t > g * p) {
        cout << "1\n";
    } else if (g + p * t < g * p) {
        cout << "2\n";
    } else {
        cout << "0\n";
    }

    return 0;
}