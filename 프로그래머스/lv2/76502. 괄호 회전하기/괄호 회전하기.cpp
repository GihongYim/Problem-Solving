#include <string>
#include <vector>

using namespace std;

int checkValid(string s, int start) {
    vector<char> stack;
    int pos;
    for (int i = 0; i < s.length(); i++) {
        pos = (start + i) % s.length();
        if (s[pos] == '(' || s[pos] == '[' || s[pos] == '{') {
            stack.push_back(s[pos]);
        } else if (s[pos] == ')') {
            if (stack.empty() || stack[stack.size() - 1] != '(')
                return 0;
            else {
                stack.pop_back();
            }
        }
        else if (s[pos] == ']') {
            if (stack.empty() || stack[stack.size() - 1] != '[')
                return 0;
            else {
                stack.pop_back();
            }
        }
        else if (s[pos] == '}') {
            if (stack.empty() || stack[stack.size() - 1] != '{')
                return 0;
            else {
                stack.pop_back();
            }
        }
    }
    if (stack.empty())
        return 1;
    else
        return 0;
}

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.length(); i++) {
        answer += checkValid(s, i);
    }
    
    return answer;
}