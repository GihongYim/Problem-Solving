#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int border = 1;
    while (border * border < n) {
        border++;
    }

    cout << string(border + 2, 'x') << '\n';
    for (int i = 0; i < border; i++) {
        cout << 'x' << string(border, '.') << 'x' << '\n';
    }
    cout << string(border + 2, 'x') << '\n';

    return 0;
}