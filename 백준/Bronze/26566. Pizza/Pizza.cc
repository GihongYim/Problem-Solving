#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        double a1, p1, r1, p2;
        double piece, whole;

        cin >> a1 >> p1;
        cin >> r1 >> p2;
        piece = a1 / p1;
        whole = (r1 * r1 * M_PI) / p2;
        if (piece < whole) {
            cout << "Whole pizza\n";
        } else {
            cout << "Slice of pizza\n";
        }
    }

    return 0;
}