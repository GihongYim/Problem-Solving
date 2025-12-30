#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> card[4];;
    string pattern;
    int n;

    for (int i = 0; i < 51; i++) {
        cin >> pattern >> n;
        if (pattern == "S") {
            card[0].push_back(n);
        } else if (pattern == "B") {
            card[1].push_back(n);
        } else if (pattern == "V") {
            card[2].push_back(n);
        } else if (pattern == "K") {
            card[3].push_back(n);
        }
    }

    sort(card[0].begin(), card[0].end());
    sort(card[1].begin(), card[1].end());
    sort(card[2].begin(), card[2].end());
    sort(card[3].begin(), card[3].end());

    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 13; j++) {
            if (card[i][j - 1] != j) {
                if (i == 0) {
                    cout << "S " << j << "\n";
                } else if (i == 1) {
                    cout << "B " << j << "\n";
                } else if (i == 2) {
                    cout << "V " << j << "\n";
                } else if (i == 3) {
                    cout << "K " << j << "\n";
                }
                return 0;
            }
        }
    }

    return 0;
}