#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int ch[30];
    int chIndex;
    int numOfKey;
    for (int i = 0; i < 30; i++) {
        ch[i] = -1;
    }
    for (int i = 0; i < keymap.size(); i++) {
        for (int j = 0; j < keymap[i].length(); j++) {
            chIndex = keymap[i][j] - 'A';
            if (ch[chIndex] == -1) {
                ch[chIndex] = j + 1;
            } else {
                ch[chIndex] = min(ch[chIndex], j + 1);
            }
        }
    }
    for (int i = 0; i < targets.size(); i++) {
        numOfKey = 0;
        for (int j = 0; j < targets[i].length(); j++) {
            if (ch[targets[i][j] - 'A'] == -1) {
                numOfKey = -1;
                break;
            }
            numOfKey += ch[targets[i][j] - 'A'];
        }
        answer.push_back(numOfKey);
    }
    return answer;
}