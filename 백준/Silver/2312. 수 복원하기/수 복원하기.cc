#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test_case;
    int n;
    int remain;
    int cnt;
    cin >> test_case;
    for (int t = 1; t <= test_case; t++) {
        cin >> n;
        remain = n;

        for (int i = 2; i <= n; i++) {
            if (remain == 1)
                break;
            cnt = 0;
            while (remain % i == 0) {
                remain /= i;
                cnt++;
            }
            if (cnt) {
                cout << i << ' ' << cnt << '\n';
            }
        }
    }

    return 0;
}