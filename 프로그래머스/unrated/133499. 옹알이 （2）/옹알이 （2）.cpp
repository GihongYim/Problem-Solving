#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    string baby[8];
    int pos;
    bool dup;
    bool ok;

    baby[0] = "aya";
    baby[1] = "ye";
    baby[2] = "woo";
    baby[3] = "ma";
    baby[4] = "ayaaya";
    baby[5] = "yeye";
    baby[6] = "woowoo";
    baby[7] = "mama";
    for (int i = 0; i < babbling.size(); i++) {
        dup = false;
        for (int j = 0; j < 4; j++) {
            pos = babbling[i].find(baby[j + 4]);
            if (pos != string::npos) {
                dup = true;
                break;
            }
        }
        if (!dup) {
            for (int j = 0; j < 4; j++) {
                while (1) {
                    pos = babbling[i].find(baby[j]);
                    if (pos == string::npos)
                        break;
                    for (int t = pos; t < pos + baby[j].length(); t++) {
                        babbling[i][t] = '0';
                    }
                }
            }
        } else {
            continue;
        }
        ok = true;
        for (int j = 0; j < babbling[i].length(); j++) {
            if (babbling[i][j] != '0') {
                ok = false;
                break;
            }
        }
        if (ok)
            answer++;
    }
    return answer;
}