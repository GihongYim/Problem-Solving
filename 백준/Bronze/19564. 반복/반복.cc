#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string word;

    cin >> word;

    int k = 1;

    for (int i = 1; i < word.length(); i++) {
        if (word[i - 1] >= word[i]) {
            k++;
        }
    }

    cout << k << '\n';
    return 0;
}