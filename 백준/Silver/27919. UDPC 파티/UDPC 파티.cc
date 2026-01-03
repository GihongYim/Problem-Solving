#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string vote = "";
    string result = "";
    map<char, int> m;

    m.insert(make_pair('U', 0));
    m.insert(make_pair('D', 0));
    m.insert(make_pair('P', 0));
    m.insert(make_pair('C', 0));

    cin >> vote;

    for (int i = 0; i < vote.length(); i++) {
        m[vote[i]]++;
    }

    if (m['U'] + m['C'] > (m['D'] + m['P'] + 1) / 2) {
        result += 'U';
    }

    if (m['D'] + m['P'] > 0) {
        result += "DP";
    }

    if (result == "") {
        result += 'C';
    }

    cout << result << '\n';

    return 0;
}   