#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int card1idx = 0;
    int card2idx = 0;
    for (int i = 0; i < goal.size(); i++) {
        if (cards1[card1idx] == goal[i]) {
            card1idx++;
            continue ;
        }
        if (cards2[card2idx] == goal[i]) {
            card2idx++;
            continue ;
        }
        answer = "No";
        return answer;
    }
    return answer;
}