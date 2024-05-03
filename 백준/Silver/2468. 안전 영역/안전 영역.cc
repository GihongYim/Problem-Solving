#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 101;
int N;
int land[MAX][MAX];
bool visited[MAX][MAX];
int mx;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y, int h) {
    int nx, ny;

    for (int d = 0; d < 4; d++) {
        nx = x + dx[d];
        ny = y + dy[d];

        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
        if (land[nx][ny] <= h || visited[nx][ny]) continue;
        visited[nx][ny] = true;
        dfs(nx, ny, h);

    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;
    mx = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> land[i][j];
            mx = max(mx, land[i][j]);
        }
    }
    int maxCnt = 0;
    int cnt;
    for (int h = 0; h <= mx; h++) {
        for (int i = 0; i < N; i++)
            fill(visited[i], visited[i] + N, false);
        cnt = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (land[i][j] > h && !visited[i][j]) {
                    cnt++;
                    visited[i][j] = true;
                    dfs(i, j, h);
                }
            }
        }
        maxCnt = max(cnt, maxCnt);
    }
    cout << maxCnt;
    return 0;
}