#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isvalid(int x, int y, int n)
{
    if (x < 0 || x >= n || y < 0 || y >= n)
        return false;
    else
        return true;
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};

    for (int i = 0; i < n; i++) {
        vector<int> temp(n);
        for (int j = 0; j < n; j++) {
            temp[j] = 0;
        }
        answer.push_back(temp);
    }
    int x = 0, y = 0;
    int d = 0;
    answer[0][0] = 1;
    int count = 2;
    while (1) {
        if (!isvalid(x + dx[d], y + dy[d], n) || answer[y + dy[d]][x + dx[d]] != 0) {
            d = (d + 1) % 4;
        }
        if (!isvalid(x + dx[d], y + dy[d], n) || answer[y + dy[d]][x + dx[d]] != 0) {
            break;
        }
        x = x + dx[d];
        y = y + dy[d];
        answer[y][x] = count++;
    }    
    return answer;
}