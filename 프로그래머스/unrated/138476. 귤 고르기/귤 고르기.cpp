#include <string>
#include <vector>
#include <algorithm>
// #include <iostream>
using namespace std;

int pcmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<pair<int, int>> p;
    sort(tangerine.begin(), tangerine.end());
    int count = 1;
    for (int i = 1; i < tangerine.size(); i++) {
        if (tangerine[i - 1] != tangerine[i]) {
            p.push_back(make_pair(tangerine[i - 1], count));
            count = 1;
        } else {
            count++;
        }
    }
    p.push_back(make_pair(tangerine[tangerine.size() - 1], count));
    sort(p.begin(), p.end(), pcmp);
    count = 0;
    for (int i = 0; i < p.size(); i++) {
        // cout << p[i].first << ' ' << p[i].second << '\n';
        count += p[i].second;
        if (count >= k) {
            answer = i + 1;
            break;
        }
    }
    if (answer == 0) {
        answer = p.size();
    }
    return answer;
}