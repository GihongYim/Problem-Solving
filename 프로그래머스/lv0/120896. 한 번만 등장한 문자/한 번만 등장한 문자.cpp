#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int count[30];
    
    fill(count, count + 30, 0);
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 30; i++) {
        if (count[i] == 1)
            answer += (i + 'a');
    }
    return answer;
}