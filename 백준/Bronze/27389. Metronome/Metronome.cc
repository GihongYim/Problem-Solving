#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    if (n % 4 == 0) {
        cout << n / 4 << ".0" << '\n';
    } else {
        cout << fixed << setprecision(2) << n / 4.0 << '\n';
    }
    return 0;
}