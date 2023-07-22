#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int solution(vector<string> strArr) {
    int answer = 0;
    
    int strLength[31];
    for (int i = 0; i <= 30; i++)
        strLength[i] = 0;
    for (int i = 0; i < strArr.size(); i++)
        strLength[strArr[i].length()]++;
    for (int i = 1; i <= 30; i++)
        answer = max(answer, strLength[i]);
    return answer;
}