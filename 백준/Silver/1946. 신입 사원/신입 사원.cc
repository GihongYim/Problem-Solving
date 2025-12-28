#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    int N;

    cin >> T;
    while (T--) {
        cin >> N;
        vector<pair<int, int>> applicants(N);
        for (int i = 0; i < N; ++i) {
            cin >> applicants[i].first >> applicants[i].second;
        }

        int cnt = 0;

        sort(applicants.begin(), applicants.end());
        int best_second = INT_MAX;
        for (const auto& applicant : applicants) {
            if (applicant.second < best_second) {
                ++cnt;
                best_second = applicant.second;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}