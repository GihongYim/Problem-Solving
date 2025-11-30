#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
 
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        int m;
        
        cin >> m;
    
        vector<string> word(m);

        for (int i = 0; i < m; i++) {
            cin >> word[i];
        }

        int n;

        cin >> n;
        vector<int> participate[n];

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            participate[i].resize(k);
            for (int j = 0; j < k; j++) {
                cin >> participate[i][j];
            }
        }

        cout << "Scenario #" << t << ":\n";

        for (int i = 0; i < n; i++) {
            string result = "";
            for (int j = 0; j < participate[i].size(); j++) {
                result += word[participate[i][j]];
            }
            cout << result << "\n";
        }
        cout << '\n';
    }

    return 0;
}