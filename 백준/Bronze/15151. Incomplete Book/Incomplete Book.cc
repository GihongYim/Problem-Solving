#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, d;
    int length = 0;
    int cnt = 0;
    cin >> k >> d;

    while (1) {
        cnt++;
        length += k;
        
        k *= 2;

        if (length + k > d) {
            break;
        }


    }

    cout << cnt << '\n';

    return 0;
}