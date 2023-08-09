#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for (int i = 0; i < n; i++) {
        vector<int> temp(n);
        for (int j = 0; j < n; j++) {
            if (i == j)
                temp[j] = 1;
            else
                temp[j] = 0;
        }
        answer.push_back(temp);
    }
    return answer;
}