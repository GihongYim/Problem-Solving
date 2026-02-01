#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, M;
    int X;
    cin >> N >> M;
    int jihoon;
    vector<vector<int>> m(N + 1, vector<int>(M + 1, 0));
    vector<vector<bool>> visited(N + 1, vector<bool>(M + 1, false));
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> m[i][j];
        }
    }

    cin >> X;

    if (m[1][1] != m[N][M]) {
        cout << "DEAD\n";
        return 0;
    }

    
    queue<pair<int, int>> q;
    q.push({1, 1});
    visited[1][1] = true;
    jihoon = m[1][1];

    bool bSuccess = false;
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;

        if (x == N && y == M) {
            bSuccess = true;
            break;
        }

       for (int dx = -X; dx <= X; dx++) {
            for (int dy = -X; dy <= X; dy++) {
                if (abs(dx) + abs(dy) > X) continue;
                int nx = x + dx;
                int ny = y + dy;

                if (nx < 1 || nx > N || ny < 1 || ny > M) continue;
                if (visited[nx][ny] || m[nx][ny] != jihoon) continue;

                visited[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }
    }

    if (bSuccess) {
        cout << "ALIVE\n";
    } else {
        cout << "DEAD\n";
    }
    
    return 0;
} 