#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int numOfX = 0;
    int numOfOther = 0;
    int xIndex = 0;
    int index = 0;
    while (1) {
        xIndex = index++;
        numOfX = 1;
        numOfOther = 0;
        while (numOfX != numOfOther) {
            if (index >= s.length())
                break ;
            if (s[index] == s[xIndex]) {
                numOfX++;
            } else {
                numOfOther++;
            }
            index++;
        }
        answer++;
        if (index >= s.length())
            break ;
    }
    return answer;
}