#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string temp;
    for (int i = 0; i < picture.size(); i++) {
        for (int s = 0; s < k; s++) {
            temp = "";
            for (int j = 0; j < picture[i].length(); j++) {
                for (int t = 0; t < k; t++) {
                    temp += picture[i][j];
                }
            }
            answer.push_back(temp);
        }
    }
    return answer;
}