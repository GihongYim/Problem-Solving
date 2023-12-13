#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tt;
    int d, n, s, p;
    cin >> tt;
    for (int t = 1; t <= tt; t++) {
        cin >> d >> n >> s >> p;
        if (d + n * p < n * s) {
            cout << "parallelize\n";
        } else if (d + n * p > n * s) {
            cout << "do not parallelize\n";
        } else {
            cout << "does not matter\n";
        }
    }
    return 0;
}