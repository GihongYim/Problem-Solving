#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int nimsum(int b, int x, int y) {
    vector<int> v;
    int ret = 0;
    while (x > 0 && y > 0) {
        v.push_back(((x % b) + (y % b)) % b);
        x /= b;
        y /= b;
    }

    while (x > 0) {
        v.push_back(x % b);
        x /= b;
    }

    while (y > 0) {
        v.push_back(y % b);
        y /= b;
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        // cout << v[i];
        ret *= b;
        ret += v[i];
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        int B, X, Y;
        cin >> B >> X >> Y;
        cout << nimsum(B, X, Y) << '\n';
    }
    return 0;
}