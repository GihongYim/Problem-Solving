#include <bits/stdc++.h>
using namespace std;

string showBin(short n) {
    int i = 128;
    string result = "";

    while (i > 0) {
        if (n & i) {
            result += '1';
        } else {
            result += '0';
        }
        i /= 2;
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    short x, y;

    while (1) {
        cin >> x >> y;
        if (x == 0 && y == 0) break;

        cout << x << " = " << showBin(x) << '\n';
        cout << y << " = " << showBin(y) << '\n';
        cout << -x << " = " << showBin(-x) << '\n';
        cout << -y << " = " << showBin(-y) << '\n';
        cout << x - y << " = " << showBin(x - y) << '\n';
        cout << '\n';
        
    }

    return 0;
}