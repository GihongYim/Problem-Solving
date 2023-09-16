#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());
    for (int i = 0; i < citations.size(); i++) {
        answer = max(answer, min(citations[citations.size() - 1 - i], i + 1));
    }
    return answer;
}