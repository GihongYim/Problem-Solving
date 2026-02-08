#include <bits/stdc++.h>
using namespace std;

int dx[3] = {-1, 1, 0};
int dy[3] = {0, 0, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int M;
    vector<string> m(2);
    vector<int> dist[2];
    int sharp = 0;

    cin >> M;
    for (int i = 0; i < 2; i++) {
        cin >> m[i];
    }
    for (int i = 0; i < 2; i++) {
        dist[i] = vector<int> (M, 0x3f3f3f3f);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < M; j++) {
            if (m[i][j] == '#') sharp++;
        }
    }

    queue<pair<int, int>> q;

    if (m[0][0] == '.') {
        q.push(make_pair(0, 0));
        dist[0][0] = 1;
    }

    if (m[1][0] == '.') {
        q.push(make_pair(1, 0));
        dist[1][0] = 1;
    }

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();


        for (int d = 0; d < 3; d++) {
            int nx = cx + dx[d];
            int ny = cy + dy[d];
            if (nx < 0 || nx > 1 || ny >= M) continue;

            if (m[nx][ny] == '.' && dist[cx][cy] + 1 < dist[nx][ny]) {
                dist[nx][ny] = dist[cx][cy] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }

    cout << 2 * M - sharp - min(dist[0][M -1], dist[1][M - 1]);

    return 0;
}