#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt = 0;
    string word;
    vector<string> forbidden = {"he", "him", "she", "her"};

    while (cin >> word) {
        if (find(forbidden.begin(), forbidden.end(), word) != forbidden.end()) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}