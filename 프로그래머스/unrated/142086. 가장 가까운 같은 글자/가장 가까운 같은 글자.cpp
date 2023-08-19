#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int ch[30];
    for (int i = 0; i < 30; i++) {
        ch[i] = -1;
    }
    for (int i = 0; i < s.length(); i++) {
        if (ch[s[i] - 'a'] == -1) {
            answer.push_back(-1);
        } else {
            answer.push_back(i - ch[s[i] - 'a']);
        }
        ch[s[i] - 'a'] = i;
    }
    return answer;
}