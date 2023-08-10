#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    vector<pair<int, int>> v;
    for (int i = 0; i < emergency.size(); i++) {
        
        v.push_back(make_pair(emergency[i], i));
    }
    sort(v.begin(), v.end());
    for (int i = v.size() - 1, j = 1; i >= 0; i--,j++) {
        answer[v[i].second] = j;
    }
    return answer;
}