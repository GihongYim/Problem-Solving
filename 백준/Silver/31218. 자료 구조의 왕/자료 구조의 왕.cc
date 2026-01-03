#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, Q;
    int cmd;
    int dy, dx, x, y;
    int r, c;
    int cnt;
    vector<int> land[1001];

    cin >> n >> m >> Q;

    cnt = n * m;

    for (int i = 1; i <= n; i++) {
        land[i] = vector<int> (m + 1, 0);
    }

    for (int t = 1; t <= Q; t++) {
        cin >> cmd;

        if (cmd == 1) {
            cin >> dy >> dx >> y >> x;
            
            while (1) {
                if (land[y][x] == 1) {
                    break;
                }
                
                land[y][x] = 1;
                cnt--;
                
                if (y + dy < 1 || y + dy > n || x + dx < 1 || x + dx > m) {
                    break;
                }
                
                y += dy;
                x += dx;
            }

        } else if (cmd == 2) {
            cin >> y >> x;

            cout << land[y][x] << '\n';

        } else if (cmd == 3) {
            cout << cnt << '\n';
        }
    }
    return 0;
}