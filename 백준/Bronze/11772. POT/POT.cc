#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    
    cin >> N;
    long long ret = 0;

    vector<string> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < N; i++) {
        long long p;
        long long x;

        // p : the rest of the number
        // x : last 1 digit number
        p = stoll(v[i].substr(0, v[i].size() - 1));
        x = v[i][v[i].size() - 1] - '0';
        ret += pow(p, x);
    }

    cout << ret << '\n';
    return 0;
}