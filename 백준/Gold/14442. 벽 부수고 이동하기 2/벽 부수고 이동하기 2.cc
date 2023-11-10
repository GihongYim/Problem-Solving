#include <iostream>
#include <string>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;

typedef struct s_Point {
    int x;
    int y;
    int k;
} Point;

int N, M, K;
string map[1001];
int min_dist;
int dist[1001][1001][11]; 
int nx, ny, nk;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1 ,1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> K;
    for (int i = 0; i < N; i++) {
        cin >> map[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            fill(dist[i][j], dist[i][j] + 11, -1);
        }
    }
    queue<Point> q;

    Point curr = {0, 0, K};
    Point next;
    q.push(curr);
    dist[0][0][K] = 1;
    while (!q.empty()) {
        curr = q.front();
        q.pop();
        for (int d = 0; d < 4; d++) {
            nx = curr.x + dx[d];
            ny = curr.y + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (curr.k > 0 && map[nx][ny] == '1' && dist[nx][ny][curr.k - 1] == -1) {
                dist[nx][ny][curr.k - 1] = dist[curr.x][curr.y][curr.k] + 1;
                next.x = nx;
                next.y = ny;
                next.k = curr.k - 1;
                q.push(next);
            } else if (map[nx][ny] == '0' && dist[nx][ny][curr.k] == -1) {
                dist[nx][ny][curr.k] = dist[curr.x][curr.y][curr.k] + 1;
                next.x = nx;
                next.y = ny;
                next.k = curr.k;
                q.push(next);
            }
        }
    }
    min_dist = 0x3f3f3f3f;
    for (int k = 0; k <= K; k++) {
        if (dist[N - 1][M - 1][k] != -1) {
            min_dist = min(min_dist, dist[N - 1][M - 1][k]);
        }
    }
    if (min_dist == 0x3f3f3f3f) {
        cout << -1 << '\n';
    } else  {
        cout << min_dist << '\n';
    }
    return 0;
}