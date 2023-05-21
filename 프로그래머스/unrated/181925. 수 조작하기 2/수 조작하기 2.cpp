#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int dist;
    for (unsigned int i = 1; i < numLog.size(); i++)
    {
        dist = numLog[i] - numLog[i - 1];
        if (dist == 1)
            answer += "w";
        else if (dist == -1)
            answer += "s";
        else if (dist == 10)
            answer += "d";
        else if (dist == -10)
            answer += "a";
    }
    return answer;
}