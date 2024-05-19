#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T;
    double area, width;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> area >> width;
        cout << fixed;
        cout << setprecision(2);
        cout << "The height of the triangle is " << area / width * 2  << " units\n";
    }
    return 0;
}