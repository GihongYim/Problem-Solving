#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    float h, p;

    while (cin >> h >> p) {
        cout << fixed << setprecision(2) << h / p << '\n';
    }
    return 0;
}