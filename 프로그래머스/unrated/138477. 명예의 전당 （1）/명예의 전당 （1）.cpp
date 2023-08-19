#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> hallOfFame;
    
    for (int i = 0; i < score.size(); i++) {
        hallOfFame.push_back(score[i]);
        sort(hallOfFame.rbegin(), hallOfFame.rend());
        if (hallOfFame.size() > k)
            hallOfFame.pop_back();
        answer.push_back(hallOfFame[hallOfFame.size() - 1]);
    }
    return answer;
}