#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

const int MAX = 10;

int N, M;
int board[MAX][MAX];

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
unordered_set<int> square;
int len;
int maxSquare = -1;

void search(int x, int y, int l, int t)
{
    int nx, ny;
    int curr = board[x][y];
    if (square.find(curr) != square.end()) {
        maxSquare = max(maxSquare, curr);
    }

    for (int d = 0; d < 8; d++) {
        curr = board[x][y];
        nx = x + dx[d] * l;
        ny = y + dy[d] * t;
        while (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            curr *= 10;
            curr += board[nx][ny];
            if (square.find(curr) != square.end()) {
                maxSquare = max(maxSquare, curr);
            }
            nx += (dx[d] * l);
            ny += (dy[d] * t);
        }
    }
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string line;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> line;
        for (int j = 0; j < M; j++) {
            board[i][j] = line[j] - '0';
        }
    }
    for (int i = 0; i <= 40000; i++) {
        square.insert(i * i);
    }
    len = min(N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 1; k <= N; k++) {
                for (int t = 1; t <= M; t++) {
                    search(i, j, k, t);
                }
            }
        }
    }
    cout << maxSquare;
    return 0;
}