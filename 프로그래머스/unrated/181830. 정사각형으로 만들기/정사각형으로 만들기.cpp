#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int n = max(arr.size(), arr[0].size());
    for (int i = 0; i < n; i++) {
        vector<int> temp(n);
        for (int j = 0; j < n; j++) {
            if (i >= arr.size() || j >= arr[i].size())
                temp[j] = 0;
            else
                temp[j] = arr[i][j];
        }
        answer.push_back(temp);
    }
    return answer;
}