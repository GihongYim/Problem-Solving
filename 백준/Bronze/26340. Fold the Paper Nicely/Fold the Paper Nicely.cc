#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, w, h, c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> w >> h >> c;
        cout << "Data set: " << w << ' ' << h << ' ' << c << '\n';
        while (c--) {
            if (w > h) {
                w /= 2;
            } else {
                h /= 2;
            }
        }
        cout << max(w, h) << ' ' << min(w, h) << "\n\n";
    }


    return 0;
}