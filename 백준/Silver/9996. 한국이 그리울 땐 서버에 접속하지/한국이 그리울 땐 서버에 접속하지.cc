#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string pattern;

    cin >> n;
    cin >> pattern;

    int starPos = pattern.find('*');

    string prefix = pattern.substr(0, starPos);
    string suffix = pattern.substr(starPos + 1);

    for (int i = 0; i < n; i++) {
        string target;
        cin >> target;

        if (target.length() < prefix.length() + suffix.length()) {
            cout << "NE\n";
            continue;
        }

        if (target.substr(0, prefix.length()) == prefix &&
            target.substr(target.length() - suffix.length()) == suffix) {
            cout << "DA\n";
        } else {
            cout << "NE\n";
        }
    }

    return 0;
}