#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int count;
    
    for (int i = 1; i < food.size(); i++) {
        count = food[i] / 2;
        for (int j = 0 ; j < count; j++) {
            answer += (i + '0');
        }
    }
    int len = answer.length();
    answer += '0';
    for (int i = len - 1; i >= 0; i--)
        answer += answer[i];
    return answer;
}