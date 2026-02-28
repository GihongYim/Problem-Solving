#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int l, h, p, e, n;

    cin >> l >> h >> p >> e >> n;

    string cat;
    int num;
    char tmp;
    map<string, pair<int, int>> scores;
    
    int i, r, s;

    for (int i = 0; i < n; i++) {
        cin >> cat >> num >> tmp >> r >> tmp >> s;
        if (scores.find(cat) != scores.end()) {
            scores.insert(make_pair(cat, make_pair(0, 0)));
        }
        scores[cat].first += r;
        scores[cat].second += s;  
    }

    double allScore = 0;

    for (auto u : scores) {
        string subject = u.first;
        double score = u.second.first;
        double total = u.second.second;
        if (subject == "Lab") {
            allScore += (score / total) * l;
        } else if (subject == "Hw") {
            allScore += (score / total) * h;
        } else if (subject == "Proj") {
            allScore += (score / total) * p;
        } else if (subject == "Exam") {
            allScore += (score / total) * e;
        }
        // cout << subject << ':' << allScore << '\n';
    }

    cout << (int)(allScore) << '\n'; 

    return 0;
}