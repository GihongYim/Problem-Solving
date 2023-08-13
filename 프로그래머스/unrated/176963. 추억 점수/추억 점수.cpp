#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> map;
    int score;
    
    for (int i = 0; i < name.size(); i++) {
        map.insert(make_pair(name[i], yearning[i]));
    }
    for (int i = 0; i < photo.size(); i++) {
        score = 0;
        for (int j = 0; j < photo[i].size(); j++) {
            score += map[photo[i][j]];
        }
        answer.push_back(score);
    }
    return answer;
}