#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    string target;
    sort(spell.begin(), spell.end());
    for (int i = 0; i < spell.size(); i++)
        target += spell[i];
    for (int i = 0; i < dic.size(); i++) {
        sort(dic[i].begin(), dic[i].end());
    }
    for (int i = 0; i < dic.size(); i++) { 
        if (target == dic[i]) {
            answer = 1;
            return answer;
        }
    }
    return answer;
}