#include <bits/stdc++.h>
using namespace std;

static const int INF = -1;

int N, M, K;
bool blocked[1000][1000];
int dista[1000][1000];

// 짝수 행: 오른쪽으로 밀림
int dy_even[6] = {-1, -1, 0, 0, 1, 1};
int dx_even[6] = {-1,  0, -1, 1, -1, 0};

// 홀수 행
int dy_odd[6]  = {-1, -1, 0, 0, 1, 1};
int dx_odd[6]  = { 0,  1, -1, 1, 0, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> K;

    for (int i = 0; i < K; i++) {
        int y, x;
        cin >> y >> x;
        blocked[y][x] = true;
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            dista[i][j] = INF;

    queue<pair<int,int>> q;
    dista[0][0] = 0;
    q.push({0, 0});

    while (!q.empty()) {
        auto [y, x] = q.front();
        q.pop();

        int* dy = (y % 2 == 0 ? dy_even : dy_odd);
        int* dx = (y % 2 == 0 ? dx_even : dx_odd);

        for (int d = 0; d < 6; d++) {
            int ny = y + dy[d];
            int nx = x + dx[d];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
            if (blocked[ny][nx]) continue;
            if (dista[ny][nx] != INF) continue;

            dista[ny][nx] = dista[y][x] + 1;
            q.push({ny, nx});
        }
    }

    cout << dista[N-1][M-1] << '\n';
    return 0;
}
