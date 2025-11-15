#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int prev, curr;
    int maxLength = 1;
    int length = 0; 

    prev = -1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> curr;

        if (curr > prev) {
            length++;
        } else {
            maxLength = max(length, maxLength);
            length = 1;
        }
    
        prev = curr;
    }

    maxLength = max(length, maxLength);

    cout << maxLength << '\n';
 
    return 0;
}