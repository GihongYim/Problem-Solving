#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    vector<string> dict;
    string curr;
    string prev;
    string temp;
    int ok;
    int pos;
    for (char i = 'A'; i <= 'Z'; i++) {
        temp = "";
        temp += i;
        dict.push_back(temp);
    }
    pos = 0;
    while (pos < msg.length()) {
        prev = msg.substr(pos, 1);
        ok = 0;
        for (int i = 2; i + pos - 1 < msg.length(); i++) {
            curr = msg.substr(pos, i);
            cout << prev << ' ' << curr << '\n';
            if (find(dict.begin(), dict.end(), curr) == dict.end()) {
                answer.push_back(find(dict.begin(), dict.end(), prev) - dict.begin() + 1);
                dict.push_back(curr);
                pos += (i - 1);
                ok = 1;
                break;
            }
            prev = curr;
        }
        if (ok == 0) {
            answer.push_back(find(dict.begin(), dict.end(), prev) - dict.begin() + 1);
            break;
        }
    }
    return answer;
}