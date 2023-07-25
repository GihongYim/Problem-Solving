#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool pcmp(pair<int,int> a, pair<int,int> b) {
    return a.first > b.first;
}

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<pair<int, int>> p;
    for (int i = 0; i < rank.size(); i++) {
        if (attendance[i]) {
            p.push_back({rank[i], i});
        }
    }
    sort(p.begin(), p.end());
    answer = 10000 * p[0].second + 100 * p[1].second + p[2].second;
    return answer;
}