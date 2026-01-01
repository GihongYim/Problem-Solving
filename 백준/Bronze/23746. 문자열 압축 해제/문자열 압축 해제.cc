#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    map<char, string> pattern;

    for (int i = 0; i < n; i++) {
        string origin;
        char code;

        cin >> origin >> code;
        pattern.insert(make_pair(code, origin));
    }

    string comp;
    cin >> comp;

    string decoded = "";

    for (int i = 0; i < comp.length(); i++) {
        decoded += pattern[comp[i]];
    }

    int s, e;
    cin >> s >> e;

    cout << decoded.substr(s - 1, e - (s - 1)) << '\n';


    return 0;
}