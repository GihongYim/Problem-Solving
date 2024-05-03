#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 105;
int N, M, K;
int land[MAX][MAX];
bool visited[MAX][MAX];
int cnt;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y) {
    int nx, ny;
    cnt++;
    for (int d = 0; d < 4; d++) {
        nx = x + dx[d];
        ny = y + dy[d];
        if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
        if (land[nx][ny] == 1 || visited[nx][ny]) continue;
        visited[nx][ny] = true;
        dfs(nx, ny);
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> M >> N >> K;

    for (int i = 0; i < N ; i++)
        fill(land[i], land[i] + M, 0);
    for (int i = 0; i < N; i++)
        fill(visited[i], visited[i] + M, false);
    for (int i = 0; i < K; i++) {
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                land[x][y] = 1;
            }
        }
    }
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < M; j++) {
    //         cout << land[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    vector<int> a;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (land[i][j] == 0 &&  !visited[i][j]) {
                cnt = 0;
                visited[i][j] = true;
                dfs(i, j);
                a.push_back(cnt);
            }
        }
    }
    sort(a.begin(), a.end());
    cout << a.size() << '\n';
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}