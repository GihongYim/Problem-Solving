#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 51;

#define NONE 0
#define GREEN 1
#define RED 2
#define FLOWER 3
int n, m, g, r;
int land[MAX][MAX];
int med[MAX][MAX];
int visited[MAX][MAX];
int dist[MAX][MAX][2];
int maxFlower = 0;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1 ,1};

void bfs() {
    queue<pair<int, int> > q;
    for (int i = 0; i < n; i++) {
        fill(visited[i], visited[i] + m, NONE);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dist[i][j][0] = -1;
            dist[i][j][1] = -1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (med[i][j] != NONE) {
                q.push(make_pair(i, j));
                dist[i][j][med[i][j] - 1] = 0;
                visited[i][j] = med[i][j];
            }
        }
    }
    while (!q.empty()) {
        pair<int, int> curr = q.front(); q.pop();
        int x = curr.first;
        int y = curr.second;
        int color = visited[x][y] - 1;
        if (visited[x][y] == FLOWER)continue;
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (land[nx][ny] == 0) continue;
            if (dist[nx][ny][color] >= 0) continue;
            if (visited[nx][ny] == FLOWER) continue;
            if (visited[nx][ny] ==  color + 1) continue;
            dist[nx][ny][color] = dist[x][y][color] + 1;
            if (dist[nx][ny][color] == dist[nx][ny][1 - color]) {
                visited[nx][ny] = FLOWER;
            } else {
                if (visited[nx][ny] == NONE){
                    visited[nx][ny] = visited[x][y];
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
    int flower = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j] == FLOWER)
                flower++;
        }
    }
    maxFlower = max(maxFlower, flower);
}

void findStart(int x, int y, int gg, int rr) {
    if (gg == 0 && rr == 0) {
        bfs();
        return;
    }

    int yy = y;
    if (med[x][yy] != NONE) yy++;
    for (int i = x; i < n; i++) {
        for (int j = yy; j < m; j++) {
            if (land[i][j] != 2) continue;
            if (gg > 0) {
                med[i][j] = GREEN;
                findStart(i, j, gg - 1, rr);
                med[i][j] = NONE;
            }
            if (rr > 0) {
                med[i][j] = RED;
                findStart(i, j, gg, rr - 1);
                med[i][j] = NONE;
            }
        }
        yy = 0;
    }   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m >> g >> r;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> land[i][j];
        }
    }
    for (int i = 0; i < n; i++)
        fill(med[i], med[i] + m, NONE); 
    findStart(0, 0, g, r);
    cout << maxFlower << '\n';
    return 0;
}