#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> m;
    int ok;
    
    for (int i = 0; i < 10; i++) {
        if (m.find(discount[i]) == m.end()) {
            m.insert(make_pair(discount[i], 1));
        } else {
            m[discount[i]]++;
        }
    }
    for (int i = 0; i < discount.size() - 10; i++) {
        ok = 1;
        for (int j = 0; j < number.size(); j++) {
            if (m[want[j]] < number[j]) {
                ok = 0;
                break ;
            }
        }
        answer += ok;
        m[discount[i]]--;
        if (m.find(discount[i + 10]) == m.end()) {
            m.insert(make_pair(discount[i + 10], 1));
        } else {
            m[discount[i + 10]]++;
        }
    }
    
    ok = 1;
    for (int j = 0; j < number.size(); j++) {
        if (m[want[j]] < number[j]) {
            ok = 0;
            break ;
        }
    }
    answer += ok;
    return answer;
}