#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);
    answer[0] = 0;
    answer[1] = 0;
    string next;
    int one;
    while (1) {
        if (s == "1")
            break;
        one = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1')
                one++;
        }
        answer[1] += (s.length() - one);
        next = "";
        for (int i = 1; i <= one; i *= 2) {
            if (i & one)
                next = "1" + next;
            else
                next = "0" + next;
        }
        s = next;
        answer[0]++;
    }
    return answer;
}