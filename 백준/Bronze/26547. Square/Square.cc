#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string word;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word;
        int len = word.length();
        cout << word << '\n';
        for (int j = 1; j < len - 1; j++) {
            cout << word[j];
            cout << string(len - 2, ' ');
            cout << word[len - 1 - j] << '\n';
        }
        if (len > 1) {
            reverse(word.begin(), word.end());
            cout << word << '\n';
        }
    }


    return 0;
}