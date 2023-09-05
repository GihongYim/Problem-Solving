#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string, int> m;
    for (int i = 0; i < words.size(); i++) {
        m.insert(make_pair(words[i], 0));
    }
    m[words[0]] = 1;
    for (int i = 1; i < words.size(); i++) {
        if (m[words[i]] == 0 && words[i - 1][words[i - 1].length() - 1] == words[i][0]) {
            m[words[i]] = 1;
        } else {
            answer.push_back((i % n) + 1);
            answer.push_back(i / n + 1);
            return answer;
        }
    }
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}