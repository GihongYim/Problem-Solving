#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;

    cin >> T;

    while (T--) {
        string n;

        cin >> n;
        int parity = 0;
        int odd = 0;
        for (int i = 0; i < n.size(); i += 8) {
            string byte = n.substr(i, 8);
            int count = count_if(byte.begin(), byte.end(), [](char c) { return c == '1'; });
            if (count % 2 == 1) {
                odd++;
            }
        }
        cout << odd << '\n';
    }
    return 0;
}