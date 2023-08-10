#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int X, Y, Z;
    char op, eq;
    for (int i = 0; i < quiz.size(); i++) {
        stringstream sin(quiz[i]);
        sin >> X >> op >> Y >> eq >> Z;
        if (op == '+') {
            if (X + Y == Z)
                answer.push_back("O");
            else
                answer.push_back("X");
        }
        else if (op == '-') {
            if (X - Y == Z)
                answer.push_back("O");
            else
                answer.push_back("X");
        }
    }
    return answer;
}