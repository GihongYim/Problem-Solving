#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double a1, p1;
    double r1, p2;
    double pizza1;
    double pizza2;
    cin >> a1 >> p1;
    cin >> r1 >> p2;

    pizza1 = p1 / a1;
    pizza2 = p2 / (r1 * r1 * M_PI);
    if (pizza1 <= pizza2) {
        cout << "Slice of pizza\n";
    } else {
        cout << "Whole pizza\n";
    }
    return 0;
}