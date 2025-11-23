#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, p;

    cin >> n;
    cin >> p;

    vector<int> arr(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != p) {
            cout << p << '\n';
            return 0;
        }
        p++;
    }
    cout << p << '\n';

    return 0;
}