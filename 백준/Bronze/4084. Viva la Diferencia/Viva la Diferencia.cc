#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int diff_abs(int x, int y){
    int diff;

    diff = x - y;
    if (diff > 0) {
        return diff;
    } else {
        return -diff;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a[5];
    bool finish;
    bool same;
    int cnt;
    while (1) {
        finish = true;
        cnt = 0;
        for (int i = 0; i < 4; i++) {
            cin >> a[i];
            if (a[i] != 0)
                finish = false;
        }
        if (finish)
            break;
        same = true;
        for (int i = 0; i < 3; i++) {
            if (a[i] != a[i + 1]) {
                same = false;
                break;
            }
        }
        if (same) {
            cout << cnt << '\n';
            continue;
        }
        a[4] = a[0];
        while (1) {
            cnt++;
            for (int i = 0; i < 4; i++) {
                a[i] = diff_abs(a[i], a[i + 1]);
            }
            same = true;
            for (int i = 0; i < 3; i++) {
                if (a[i] != a[i + 1]) {
                    same = false;
                    break;
                }
            }
            if (same)
                break;
            a[4] = a[0];
        }
        cout << cnt << '\n';
    }
    return 0;
}