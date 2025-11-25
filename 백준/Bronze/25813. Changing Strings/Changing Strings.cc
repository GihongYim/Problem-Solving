#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;

    cin >> s;

    int i = 0;

    char findChar = 'U';
    
    while (i < (int)s.size()) {
        if (s[i] != findChar) {
            s[i] = '-';
        } else {
            break;
        }
        i++;
    }
    i++;

    findChar = 'F';
    int j = (int)s.size() - 1;
    while (j >= 0) {
        if (s[j] != findChar) {
            s[j] = '-';
        } else {
            break;
        }
        j--;
    }
    j--;
    for (int k = i; k <= j; k++) {
        s[k] = 'C';
    }

    cout << s << '\n';

    return 0;
}