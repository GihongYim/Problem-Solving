#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < dots.size(); i++) {
        if (x.empty() || x[0] != dots[i][0]) {
            x.push_back(dots[i][0]);
        }
        if (y.empty() || y[0] != dots[i][1]) {
            y.push_back(dots[i][1]);
        }
    }
    answer = abs(x[0] - x[1]) * abs(y[0] - y[1]);
    return answer;
}