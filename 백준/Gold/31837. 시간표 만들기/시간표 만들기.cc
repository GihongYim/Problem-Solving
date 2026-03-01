#include <bits/stdc++.h>
using namespace std;

struct Course {
    int group, credit, day, start, end;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<Course> courses;

    for (int g = 0; g < N; g++) {
        int a;
        cin >> a;
        for (int j = 0; j < a; j++) {
            int c, d;
            string s, e;
            cin >> c >> d >> s >> e;
            int sh = stoi(s.substr(0, 2)), sm = stoi(s.substr(3, 2));
            int eh = stoi(e.substr(0, 2)), em = stoi(e.substr(3, 2));
            courses.push_back({g, c, d, sh * 60 + sm, eh * 60 + em});
        }
    }

    int M = courses.size();
    int ans = 0;

    for (int mask = 0; mask < (1 << M); mask++) {
        vector<int> sel;
        for (int i = 0; i < M; i++)
            if (mask >> i & 1) sel.push_back(i);

        bool valid = true;
        int totalCredit = 0;

        for (int i = 0; i < (int)sel.size() && valid; i++) {
            totalCredit += courses[sel[i]].credit;
            for (int j = i + 1; j < (int)sel.size() && valid; j++) {
                auto& ci = courses[sel[i]];
                auto& cj = courses[sel[j]];

                if (ci.group == cj.group) { valid = false; break; }

                if (ci.day == cj.day && ci.start < cj.end && cj.start < ci.end)
                    valid = false;
            }
        }

        if (valid && totalCredit == 22) ans++;
    }

    cout << ans << '\n';
    return 0;
}