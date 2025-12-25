#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    int n;
    
    cin >> n;

    vector<bool> detection(n);
    string str;
    for (int i = 0; i < n; i++) {
        cin>> str;
        if (str == "TRUTH") {
            detection[i] = false;
        } else {
            detection[i] = true;
        }
    }

    bool cur = detection[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        cur = cur ^ detection[i];
    }

    if (cur) {
        cout << "LIE\n";
    } else {
        cout << "TRUTH\n";
    }

    return 0;
}
