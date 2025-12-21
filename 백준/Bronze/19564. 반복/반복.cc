#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string alpha = "abcdefghijklmnopqrstuvwxyz";

    string word;

    cin >> word;
    
    int k = 0;
    int index = 0;
    int l = word.length();
    while (index < l) {
        for (int i = 0; i < 26; i++) {
            if (word[index] == alpha[i]) {
                index++;
            }
        }
        k++;
    }

    cout << k << '\n';

    return 0;
}