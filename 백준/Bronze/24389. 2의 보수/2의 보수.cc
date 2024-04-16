#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, nn;

    cin >> n;
    nn = -n;
    nn ^= n;
    int cnt = 0;
    for (int i = 0; i < 32; i++) {
        if (nn & (1 << i)) {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}