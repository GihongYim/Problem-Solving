#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, v, e;

    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> v >> e;
        cout << 2 - v + e << '\n';
    }
    return 0;
}