#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n;
int ingredient[10][4][4][4];
char element[10][4][4][4];
char board[5][5];
int num[5][5];
int candi[3][2];
int pos[3];
bool visited[10];
int quality = 0;
int sx[4] = {0, 0, 1, 1};
int sy[4] = {0, 1, 0, 1};

void makeRotate(int numOfIngredient) {
    for (int index = 0; index < numOfIngredient; index++) {
        for (int rot = 1; rot < 4; rot++) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    ingredient[index][j][3 - i][rot] = ingredient[index][i][j][rot - 1];
                }
            }
        }
        for (int rot = 1; rot < 4; rot++) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    element[index][j][3 - i][rot] = element[index][i][j][rot - 1];
                }
            }
        }
    }
}

int makeBomb() {
    for (int i = 0; i < 5; i++)
        fill(board[i], board[i] + 5, 'W');
    for (int i = 0; i < 5; i++)
        fill(num[i], num[i] + 5, 0);

    for (int i = 0; i < 3; i++) {
        int x0 = sx[pos[i]];
        int y0 = sy[pos[i]];
        for (int x = 0; x < 4; x++) {
            for (int y = 0; y < 4; y++) {
                num[x + x0][y + y0] = max(0,
                num[x + x0][y + y0] + ingredient[candi[i][0]][x][y][candi[i][1]]);
                num[x + x0][y + y0] = min(num[x + x0][y + y0], 9);
                if (element[candi[i][0]][x][y][candi[i][1]] == 'W') continue;
                board[x + x0][y + y0] = element[candi[i][0]][x][y][candi[i][1]];
            }
        }
    }
    int score = 0;
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            if (board[x][y] == 'R') {
                score += (num[x][y] * 7);
            } else if (board[x][y] == 'B') {
                score += (num[x][y] * 5);
            } else if (board[x][y] == 'G') {
                score += (num[x][y] * 3);
            } else if (board[x][y] == 'Y') {
                score += (num[x][y] * 2);
            }
        }
    }
    return score;
}

void calcQuality(int index) {
    int score = 0;
    if (index == 3) {
        score = makeBomb();
        quality = max(quality, score);
        return;
    }
    for (int i = 0; i < 4; i++) {
        pos[index] = i;
        calcQuality(index + 1);
    }
}

void search(int cnt) {
    if (cnt == 3) {
        calcQuality(0);
        return;
    }
    for (int nxt = 0; nxt < n; nxt++) {
        for (int i = 0; i < 4; i++) {
            if (visited[nxt]) continue;
            visited[nxt] = true;
            candi[cnt][0] = nxt;
            candi[cnt][1] = i;
            search(cnt + 1);
            visited[nxt] = false;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int t = 0; t < n; t++) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> ingredient[t][i][j][0];
            }
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> element[t][i][j][0];
            }
        }
    }
    fill(visited, visited + n, false);
    makeRotate(n);
    search(0);
    cout << quality << '\n';
    return 0;
}