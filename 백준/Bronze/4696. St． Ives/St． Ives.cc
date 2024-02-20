#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    float n;
    float ans;
    while (1) {
        cin >> n;
        if ((float)n == 0)
            break;
        ans = 0.0;
        for (int i = 0; i < 5; i++) {
            ans += pow(n, i);
        }
        cout << fixed << setprecision(2);
        cout << ans << '\n';
    }

    return 0;
}