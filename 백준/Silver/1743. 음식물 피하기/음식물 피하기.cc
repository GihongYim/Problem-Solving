#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, K;
const int MAX = 101;
int land[MAX][MAX];
int areaNum[MAX][MAX];
bool visited[MAX][MAX];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};




void dfs(int x, int y, int num) {

    int nx, ny;

    for (int d = 0; d < 4; d++) {
        nx = x + dx[d];
        ny = y + dy[d];

        if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
        if (land[nx][ny] == 0 || visited[nx][ny]) continue;
        visited[nx][ny] = true;
        areaNum[nx][ny] = num;
        dfs(nx, ny, num);
    }
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> N >> M >> K;
    for (int i = 0; i < N; i++)
        fill(land[i], land[i] + M, 0);
    for (int i = 0; i < N; i++)
        fill(areaNum[i], areaNum[i] + M, 0);
    for (int i = 0; i < N; i++)
        fill(visited[i], visited[i] + M, false);

    for (int i = 0; i < K; i++) {
        int x, y;
        cin >> x >> y;
        land[x - 1][y - 1] = 1;
    }

    int cnt = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (land[i][j] == 1 && !visited[i][j]) {
                visited[i][j] = true;
                areaNum[i][j] = cnt;
                dfs(i, j, cnt++);
            }
        }
    }
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < M; j++) {
    //         cout << areaNum[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    int asdf[10005];
    fill(asdf, asdf + N * M, 0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (areaNum[i][j] != 0) {
                asdf[areaNum[i][j]]++;
            }
        }
    }
    int ret = 0;
    for (int i = 1; i < cnt; i++) {
        ret = max(ret, asdf[i]);
    }
    cout << ret << '\n';
    
    return 0;
}