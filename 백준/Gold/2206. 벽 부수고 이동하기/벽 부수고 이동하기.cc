#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
const int MAX = 1005;
const int INF = 0x3f3f3f3f;
int N, M;
int nx, ny;
int land[MAX][MAX];
string line[MAX];
int dist[MAX][MAX][2];

typedef struct NODE {
    int x, y, wall;
}node;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> line[i];
        for (int j = 0; j < M; j++) {
            land[i][j] = line[i][j] - '0';
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            fill(dist[i][j], dist[i][j] + 2, INF);
        }
    }
    queue<node> q;
    node start;
    start.x = 0;
    start.y = 0;
    start.wall = 0;
    q.push(start);
    dist[0][0][0] = 1;
    while (!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int wall = q.front().wall;
        q.pop();

        for (int d = 0; d < 4; d++) {
            nx = x + dx[d];
            ny = y + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (land[nx][ny] == 0 && dist[x][y][wall] + 1 < dist[nx][ny][wall]) {
                dist[nx][ny][wall] = dist[x][y][wall] + 1;
                node newNode;
                newNode.x = nx;
                newNode.y = ny;
                newNode.wall = wall;
                q.push(newNode);
            }
            if (wall == 0 && land[nx][ny] == 1 && dist[x][y][0] + 1 < dist[nx][ny][1]) {
                dist[nx][ny][1] = dist[x][y][0] + 1;
                node newNode;
                newNode.x = nx;
                newNode.y = ny;
                newNode.wall = 1;
                q.push(newNode);
            }
        }
    }
    if (dist[N - 1][M - 1][0] == INF && dist[N - 1][M - 1][1] == INF) {
        cout << "-1";
    } else {
        cout << min(dist[N - 1][M - 1][0], dist[N - 1][M - 1][1]);
    }
    return 0;
}