#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    int n;

    cin >> T;

    while (T--) {
        cin >> n;

        vector<string> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(), [](const string& a, const string& b) {
            int i = 0;
            while (i < min(a.size(), b.size())) {
                if (a[i] != b[i]) {
                    if (a[i] != '-' && b[i] == '-') {
                        return true;
                    }
                    if (a[i] == '-' && b[i] != '-') {
                        return false;
                    }

                    char ca = tolower(a[i]);
                    char cb = tolower(b[i]);
                    if (ca != cb) {
                        return ca < cb;
                    }
                    
                    return a[i] < b[i];
                }
                i++;
            }
            return a.size() < b.size();
        });

        for (int i = 0; i < n; i++) {
            cout << arr[i] << '\n';
        }
    }
    return 0;
}