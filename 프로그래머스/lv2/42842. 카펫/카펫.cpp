#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int total = brown + yellow;
    
    for (int i = 1; i <= yellow; i++) {
        if (yellow % i == 0) {
            if (total == ((i + 2) * (yellow / i + 2))) {
                answer.push_back(yellow / i + 2);
                answer.push_back(i + 2);
                return answer;
            }
        }
    }
    return answer;
}