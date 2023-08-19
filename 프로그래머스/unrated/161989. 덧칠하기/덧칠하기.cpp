#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int end = section[0] + m;
    for (int i = 1; i < section.size(); i++) {
        if (section[i] < end) {
            continue ;
        } else {
            answer++;
            end = section[i] + m;
        }
    }
    return answer;
}