#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    int k;
    string p;

    cin >> N;
    for (int t = 1; t <= N; t++) {
        cin >> k >> p;

        vector<char> s;
        bool legal = true;
        for (int i = 0; i < k; i++) { 
            if (p[i] == '>') {
                s.push_back(p[i]);
            } else {
                if (!s.empty() && s.back() == '>') {
                    s.pop_back();
                } else {
                    legal = false;
                    break;
                }
            }
        }
        if (!s.empty())
            legal = false;

        if (legal) {
            cout << "legal\n";
        } else {
            cout << "illegal\n";
        }
    }
    return 0;
}