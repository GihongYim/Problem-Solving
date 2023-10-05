#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    int erased[50][50];
    bool changed = true;
    int pos;
    while (changed) {
        changed = false;
        for (int i = 0; i < m; i++) {
           for (int j = 0; j < n; j++) {
            erased[i][j] = 0;
           }
        }
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (board[i][j] == 'X')
                    continue;
                if (board[i][j] == board[i][j + 1] &&
                   board[i][j] == board[i + 1][j] &&
                   board[i][j] == board[i + 1][j + 1]) {
                    erased[i][j] = 1;
                    erased[i][j + 1] = 1;
                    erased[i + 1][j] = 1;
                    erased[i + 1][j + 1] = 1;
                    changed = true;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (erased[i][j] == 1) {
                    board[i][j] = 'X';
                    answer++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            pos = m - 1;
            for (int j = m - 1; j >= 0 ; j--) {
                if (board[j][i] != 'X') {
                    board[pos][i] = board[j][i];
                    if (j != pos) {
                        board[j][i] = 'X';
                    }
                    pos--;
                }
            }
        }
    }
    return answer;
}