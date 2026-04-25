#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;

    cin >> T;
    cin.ignore();
    for (int t = 0; t < T; t++) {
        string s;
        
        getline(cin, s);

        reverse(s.begin(), s.end());

        cout << s << "\n";
    }

    return 0;
}