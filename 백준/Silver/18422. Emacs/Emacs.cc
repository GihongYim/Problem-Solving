#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    int cnt = 0;

    int dx[] = {0, 1};
    int dy[] = {1, 0};

    cin >> n >> m;

    vector<string> board(n);
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j] || board[i][j] == '.') continue;
            if (board[i][j] == '*') {
                int x = i;
                int y = j;

                queue<pair<int, int>> q;

                visited[i][j] = true;

                q.push({x, y});

                while (!q.empty()) {
                    int cx = q.front().first;
                    int cy = q.front().second;
                    q.pop();

                    for (int d = 0; d < 2; d++) {
                        int nx = cx + dx[d];
                        int ny = cy + dy[d];

                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if (visited[nx][ny] || board[nx][ny] == '.') continue;
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
                cnt++;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}