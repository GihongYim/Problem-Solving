#include <bits/stdc++.h>
using namespace std;

int hamming(string &a, string &b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) cnt++;
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, L;
    cin >> N >> L;

    vector<string> names(N);
    for (int i = 0; i < N; i++) {
        cin >> names[i];
    }

    vector<string> candi;
    candi.push_back(names[0]);

    for (int i = 0; i < L; i++) {
        for (char c = 'A'; c <= 'Z'; c++) {
            if (c == names[0][i]) continue;
            string tmp = names[0];
            tmp[i] = c;
            candi.push_back(tmp);
        }
    }

    for (string cand : candi) {
        bool ok = true;
        for (string name : names) {
            if (hamming(cand, name) > 1) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << cand << '\n';
            return 0;
        }
    }

    cout << "CALL FRIEND" << '\n';
    return 0;
}