#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int start[2] = {500, 500};
    int end[2] = {0, 0};
    for (int i = 0; i < wallpaper.size(); i++) {
        for (int j = 0; j < wallpaper[i].length(); j++) {
            if (wallpaper[i][j] == '#') {
                start[0] = min(start[0], i);
                start[1] = min(start[1], j);
                end[0] = max(end[0], i);
                end[1] = max(end[1], j);                
            }
        }
    }
    answer.push_back(start[0]);
    answer.push_back(start[1]);
    answer.push_back(end[0] + 1);
    answer.push_back(end[1] + 1);
    return answer;
}