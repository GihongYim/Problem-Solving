#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, k;

    int T;
    
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        cin >> a >> b >> k;

        int cnt = 0;
        for (int x = 0; x < a; x++) {
            for (int y = 0; y < b; y++) {
                if ((x & y) < k)
                    cnt++;
            }
        }

        cout << "Case #" << t << ": " << cnt << '\n';
    }



    return 0;
}