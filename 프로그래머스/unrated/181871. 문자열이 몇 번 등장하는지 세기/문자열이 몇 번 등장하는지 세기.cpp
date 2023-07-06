#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int idx = 0;
    while (1) {
        idx = myString.find(pat, idx);
        if (idx == string::npos)
            break;
        else
            answer++;
        idx++;
    }
    return answer;
}