#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int digitX[10];
    int digitY[10];
    int count;
    fill(digitX, digitX + 10, 0);
    fill(digitY, digitY + 10, 0);
    for (int i = 0; i < X.length(); i++) {
        digitX[X[i] - '0']++;
    }
    for (int i = 0; i < Y.length(); i++) {
        digitY[Y[i] - '0']++;
    }
    for (int i = 9; i >= 0; i--) {
        count = min(digitX[i], digitY[i]);
        for (int j = 0; j < count; j++) {
            answer += (i + '0');
        }
    }
    while (answer[0] == '0' && answer.length() > 1)
        answer = answer.substr(1);
    if (answer == "")
        answer += "-1";
    return answer;
}