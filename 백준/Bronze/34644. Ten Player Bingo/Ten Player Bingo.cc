#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    for (int i = 0; i < 100; i++){
        cin >> n;
    }

    if (n % 10 == 0) {
        cout << 10 << '\n';
        return 0;
    } else {
        cout << n % 10 << '\n';
    }
    return 0;
}