#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    float num;
    string base;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cin >> num >> base;
        if (base == "kg") {
            cout << fixed << setprecision(4) << num * 2.2046 << " lb\n";
        } else if (base == "l") {
            cout << fixed << setprecision(4) << num * 0.2642 << " g\n";
        } else if (base == "lb") {
            cout << fixed << setprecision(4) << num * 0.4536 << " kg\n";
        } else if (base == "g") {
            cout << fixed << setprecision(4) << num * 3.7854 << " l\n";
        }
    }
    return 0;
}