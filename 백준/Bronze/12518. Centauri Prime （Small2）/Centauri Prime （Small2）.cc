#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    string name;
    string aeiou = "aeiouAEIOU";

    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> name;
        
        cout << "Case #" << t << ": " << name << " is ruled by " ; 
        if (aeiou.find(name.back()) != string::npos) {
            cout << "a queen.\n";
        } else if (name.back() == 'y' || name.back() == 'Y') {
            cout << "nobody.\n";
        } else {
            cout << "a king.\n";
        }
    }
    return 0;
}