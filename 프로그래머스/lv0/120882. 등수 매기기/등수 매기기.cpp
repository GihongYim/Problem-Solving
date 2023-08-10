#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
    vector<vector<int>> v;
    for (int i = 0; i < score.size(); i++) {
        vector<int> temp(2);
        temp[0] = score[i][0] + score[i][1];
        temp[1] = i;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int j = 1;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (i < v.size() - 1 && v[i][0] == v[i + 1][0])
            answer[v[i][1]] = answer[v[i + 1][1]];
        else {
            answer[v[i][1]] = j;
        }
        j++;    
    }
    return answer;
}