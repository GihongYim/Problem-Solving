#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    int a, b, c;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> a >> b >> c;
        int cnt = 0;
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                for (int k = 1; k <= c; k++) {
                    if ((i % j == j % k) && (j % k== k % i))
                        cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}