#include <string>
#include <vector>

using namespace std;

bool isvalid(int x, int y, int n) {
    if (x < 0 || x >= n || y < 0 || y >= n)
        return false;
    else
        return true;
}

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    answer = n * n;
    int dx[] = {0, -1, -1, 0, 1, 1, 1, 0, -1};
    int dy[] = {0, 0, 1, 1, 1, 0, -1, -1, -1};
    int x, y;
    int bomb;
    for (int i = 0; i < board.size(); i++){
        for (int j = 0; j < board[i].size(); j++) {
            for (int d = 0; d < 9; d++) {
                x = i + dx[d];
                y = j + dy[d];
                bomb = 0;
                if (isvalid(x, y, n) && board[x][y] == 1) {
                    bomb = 1;
                    break ;
                }
            }
            answer -= bomb;
        }
    }
    
    return answer;
}