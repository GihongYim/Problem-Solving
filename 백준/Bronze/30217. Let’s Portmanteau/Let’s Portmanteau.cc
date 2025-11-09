#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string a, b;
    string pre = "";
    string post = "";
    string aeiou = "aeiou";
    char v1 = '\0';
    char v2 = '\0';

    cin >> a;
    cin >> b;

    pre += a[0];
    for (int i = 1; i < a.length(); i++) {
        if (aeiou.find(a[i]) != string::npos) {
            v1 = a[i];
            break;
        }
        pre += a[i];
    }

    post = b.back();
    for (int i = b.length() - 2; i >= 0; i--) {
        if (aeiou.find(b[i]) != string::npos) {
            v2 = b[i];
            break;
        }
        post = b[i] + post;
    }

    char merge;
    if (v2) merge = v2;
    else if (v1) merge = v1;
    else merge = 'o';

    cout << pre << merge << post << '\n';

    return 0;
}