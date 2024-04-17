#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double c4, a3, a4;
    double e, p, s;

    cin >> c4 >> a3 >> a4;

    e = 229 * 324 * c4 * 2;
    p = 297 * 420 * a3 * 2;
    s = 210 * 297 * a4;

    cout << fixed;
    cout << setprecision(6);
    cout << (e + p + s) * 0.000001;


    return 0;
}