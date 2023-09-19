#include <string>
#include <map>
#include <algorithm>
using namespace std;

map<string, int> makeMap(string str) {
    string token;
    map<string, int> m;
    for (int i = 0; i < str.length() - 1; i++) {
        token = str.substr(i, 2);
        token[0] = tolower(token[0]);
        token[1] = tolower(token[1]);
        if (token[0] < 'a' || token[0] > 'z' || token[1] < 'a' || token[1] > 'z') {
            continue;
        }
        if (m.find(token) == m.end()) {
            m.insert(make_pair(token, 1));
        } else {
            m[token]++;
        }
    }
    return m;
}

int solution(string str1, string str2) {
    int answer = 0;
    map<string, int> m1, m2;
    int total = 0;
    int intersection = 0;

    m1 = makeMap(str1);
    m2 = makeMap(str2);
    for (auto it: m1) {
        if (m2.find(it.first) == m1.end()) {
            m2.insert(make_pair(it.first, 0));
        }
    }
    
    for (auto it: m2) {
        if (m1.find(it.first) == m1.end()) {
            m1.insert(make_pair(it.first, 0));
        }
    }
    for (auto it : m1) {
        total += max(m1[it.first], m2[it.first]);
        intersection += min(m1[it.first], m2[it.first]);
    }
    if (m1.size() == 0 || m2.size() == 0) {
        answer = 65536;
    } else {
    answer = intersection * 65536 / total;
    }
    return answer;
}