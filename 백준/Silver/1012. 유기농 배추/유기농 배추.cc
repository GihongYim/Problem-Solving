#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 50;

int N, M, K;
int land[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = {-1, 1, 0 ,0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y) {
    int nx, ny;
    for (int d = 0; d < 4; d++) {
        nx = x + dx[d];
        ny = y + dy[d];
        if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
        if (land[nx][ny] == 0 || visited[nx][ny]) continue;
        visited[nx][ny] = true;
        dfs(nx, ny);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;

    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        cin >> M >> N >> K;

        for (int i = 0; i < N; i++) {
            fill(land[i], land[i] + M, 0);
        }
        for (int i = 0; i < N; i++)
            fill(visited[i], visited[i] + M, false);

        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> y >> x;
            land[x][y] = 1;
        }
        
        int ant = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (land[i][j] == 1 && !visited[i][j]) {
                    visited[i][j] = true;
                    ant++;
                    dfs(i, j);
                }
            }
        }
        cout << ant << '\n';
    }
    return 0;
}