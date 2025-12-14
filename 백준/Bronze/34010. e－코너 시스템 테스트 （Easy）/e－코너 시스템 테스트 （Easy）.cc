#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;

    int dist;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            int temp;
            cin >> temp;
        }

        if (i == n - 1) break;
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
        }
    }

    cout << 2 * (n - 1) << ' ' << 2 * (n - 1) - 1 << '\n';


    return 0;
}