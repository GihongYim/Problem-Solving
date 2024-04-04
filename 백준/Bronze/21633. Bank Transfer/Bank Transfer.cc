#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double k;
    double commision;
    
    cin >> k;
    commision = 25 + 0.01 * k;
    commision = max(100.0, commision);
    commision = min(2000.0, commision);
    cout << fixed;
    cout << setprecision(2);
    cout << commision << '\n';

    return 0;
}