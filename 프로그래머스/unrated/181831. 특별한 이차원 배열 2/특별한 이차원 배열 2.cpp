#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;
    for (int i = 1; i < arr.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i][j] != arr[j][i]) {
                answer = 0;
                return answer;
            }
        }
    }
    return answer;
}