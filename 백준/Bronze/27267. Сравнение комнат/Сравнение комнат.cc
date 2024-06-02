#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int ab = a * b;
    int cd = c * d;

    if (ab > cd) {
        cout << "M\n";
    } else if (ab < cd) {
        cout << "P\n";
    } else {
        cout << "E\n";
    }


    return 0;
}