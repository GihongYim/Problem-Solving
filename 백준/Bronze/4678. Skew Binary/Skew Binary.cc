#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string n;
    unsigned int result;
    unsigned int base;

    while (1) {
        cin >> n;

        if (n == "0")
            break;
    
        base = 2;
        result = 0;
        for (int i = n.length() - 1; i >= 0; i--) {
            result += (n[i] - '0') * (base - 1);
            base *= 2;
        }
        
        cout << result << '\n';
    }

    return 0;
}