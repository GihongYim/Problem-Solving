#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int N, M;
int ice1[305][305];
int ice2[305][305];
bool visited[305][305];
bool iceland;
bool exist;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void fillIce(int x, int y) {
    stack<pair<int, int> > s;
    int cx, cy;
    int nx, ny;

    s.push(make_pair(x, y));
    visited[x][y] = true;
    while (!s.empty()) {
        cx = s.top().first;
        cy = s.top().second;
        s.pop();
        for (int d = 0; d < 4; d++) {
            nx = cx + dx[d];
            ny = cy + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (!visited[nx][ny] && ice1[nx][ny] > 0) {
                visited[nx][ny] = true;
                s.push(make_pair(nx, ny));
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int time;
    queue<pair<int ,int> >q;
    int x, y, nx, ny;
    int water;
    int qSize;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> ice1[i][j];
            if (ice1[i][j] != 0) {
                q.push(make_pair(i, j));
            }
        }
    }
    time = 1;
    while (!q.empty()) {
        for (int i = 0; i < N; i++) {
            fill(ice2[i], ice2[i] + M, 0);
            fill(visited[i], visited[i] + M, false);
        }
        qSize = q.size();
        for (int i = 0; i < qSize; i++) {
            x = q.front().first;
            y = q.front().second;
            q.pop();
            water = 0;
            for (int d = 0; d < 4; d++) {
                nx = x + dx[d];
                ny = y + dy[d];
                if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
                    water++;
                    continue;
                }
                if (ice1[nx][ny] == 0) {
                    water++;
                }
            }
            ice2[x][y] = max(0, ice1[x][y] - water);
            if (ice2[x][y] > 0) {
                q.push(make_pair(x, y));
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                ice1[i][j] = ice2[i][j];
            }
        }
        iceland = false;
        exist = false;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (ice1[i][j] > 0 && iceland && !visited[i][j]) {
                    cout << time << '\n';
                    return 0;
                }
                if (ice1[i][j] > 0 && !visited[i][j]) {
                    fillIce(i, j);
                    iceland = true;
                    exist = true;
                }
            }
        }
        if (!exist) {
            cout << "0\n";
            return 0;
        }
        time++;
    }
    return 0;    
}