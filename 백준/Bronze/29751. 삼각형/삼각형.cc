#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float w, h;

    cin >> w >> h;

    cout << fixed << setprecision(1) << w * h / 2.0 << '\n';
    return 0;
}