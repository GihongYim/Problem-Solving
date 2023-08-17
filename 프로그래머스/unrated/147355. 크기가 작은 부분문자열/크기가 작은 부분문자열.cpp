#include <string>
#include <vector>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    unsigned long long pNum = stol(p);
    unsigned long long tNum;
    string subT;
    for (int i = 0; i < t.length() - p.length() + 1; i++) {       
        subT = t.substr(i, p.length());
        tNum = stol(subT);
        if (tNum <= pNum) 
            answer++;
    }
    return answer;
}