#include <bits/stdc++.h>
using namespace std;

struct s_lecture {
    int c;
    int s;      
    vector<pair<string, int>> hs;
};

string weekday[5] = {"MON", "TUE", "WED", "THU", "FRI"};

map<pair<string, int>, bool> mp;

bool canGraduate = false;

void backtracking(vector<s_lecture>& lectures, int idx, int M, int currentCredits) {
    if (currentCredits >= M) {
        canGraduate = true;
        return;
    }

    if (idx >= lectures.size()) {
        return;
    }

    bool canTake = true;
    for (auto& h : lectures[idx].hs) {
        if (mp[make_pair(h.first, h.second)]) {
            canTake = false;
            break;
        }
    }

    if (canTake) {
        for (auto& h : lectures[idx].hs) {
            mp[make_pair(h.first, h.second)] = true;
        }

        backtracking(lectures, idx + 1, M, currentCredits + lectures[idx].c);

        for (auto& h : lectures[idx].hs) {
            mp[make_pair(h.first, h.second)] = false;
        }
    }

    backtracking(lectures, idx + 1, M, currentCredits);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 24; j++) {
            mp[make_pair(weekday[i], j)] = false;
        }
    }

    vector<s_lecture> lectures(N);

    for (int i = 0; i < N; i++) {
        cin >> lectures[i].c >> lectures[i].s;

        for (int j = 0; j < lectures[i].s; j++) {
            string d;
            int h;
            cin >> d >> h;
            lectures[i].hs.push_back(make_pair(d, h));
        }
    }
    
    backtracking(lectures, 0, M, 0);

    if (canGraduate) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}