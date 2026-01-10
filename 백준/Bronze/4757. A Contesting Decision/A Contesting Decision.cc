#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTeams;
    string name;
    int piSub, piTime;
    map<string, int> score;
    map<string, int> penalty;

    string maxScoreTeam = "";
    int maxScore = 0;

    cin >> nTeams;

    for (int t = 0; t < nTeams; t++) {
        cin >> name;

        score.insert(make_pair(name, 0));
        penalty.insert(make_pair(name, 0));

        for (int i = 0; i < 4; i++) {
            cin >> piSub >> piTime;
            if (piSub > 0 && piTime > 0) {
                score[name]++;
                penalty[name] += piTime + (piSub - 1) * 20;
            }
        }

        if (score[name] > maxScore) {
            maxScore = score[name];
            maxScoreTeam = name;
        }
    }

    for(auto u : score) {
        if (u.first == maxScoreTeam) continue;

        if (u.second == maxScore) {
            if (penalty[u.first] < penalty[maxScoreTeam]) {
                maxScoreTeam = u.first;
            }
        }
    }

    cout << maxScoreTeam << ' ' << score[maxScoreTeam] << ' ' << penalty[maxScoreTeam] << '\n';
    return 0;
}

// 15 + 120 + 2 * 20 + 300