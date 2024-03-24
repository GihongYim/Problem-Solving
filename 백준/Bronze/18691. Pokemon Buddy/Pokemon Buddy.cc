#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;

    cin >> T;
    int group[4] = {0, 1, 3, 5};
    for (int test_case = 1; test_case <= T; test_case++) {
        int g, c, e;
        cin >> g >> c >> e;
        int result = (e - c) * group[g];
        if (result < 0) {
            cout << 0 << '\n';
        } else {
            cout << result << '\n';
        }

    }

    return 0;
}