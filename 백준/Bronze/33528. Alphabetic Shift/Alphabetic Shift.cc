#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;

    cin >> str;

    for (int i = 0; i < 26; i++) {
        string decode = "";

        for (int j = 0; j < str.size(); j++) {
            decode += (str[j] - 'A' - i + 26) % 26 + 'A';
        }
        cout << decode << "\n";
    }

    return 0;
}