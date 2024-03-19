#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
const int N = 5;
const int MAX = 126;
int map[N][N][N][N];
int minDist = MAX;
int mapIndex[N] = {0, 1, 2, 3, 4};
int rotateCnt[N];

int dist[N][N][N];
int dx[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};

void rotateMap() {
    for (int plate = 0; plate < N; plate++) {
        for (int d = 1; d < 4; d++) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    map[plate][d][j][N - 1 - i] = map[plate][d - 1][i][j];
                }
            }
        }
    }
}

vector<int> getPos(int x, int y, int z) {
    vector<int> pos(3);
    pos[0] = x;
    pos[1] = y;
    pos[2] = z;
    return pos;
}

bool isvalid(int x, int y, int z) {
    if (x < 0 || x >= N || y < 0 || y >= N || z < 0 || z >= N)
        return false;
    else
        return true;
}

int findPath() {
    int newMap[N][N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                newMap[i][j][k] = map[mapIndex[i]][rotateCnt[i]][j][k];
            }
        }
    }
    if (newMap[0][0][0] == 0 || newMap[N - 1][N - 1][N - 1] == 0)
        return MAX;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fill(dist[i][j], dist[i][j] + N, MAX);
        }
    }
    queue<vector<int> > q;
    dist[0][0][0] = 0;
    q.push(getPos(0, 0, 0));
    while (!q.empty()) {
        vector<int> curr = q.front(); q.pop();
        int x = curr[0];
        int y = curr[1];
        int z = curr[2];
        for (int d = 0; d < 6; d++) {
            int nx, ny, nz;
            nx = x + dx[d];
            ny = y + dy[d];
            nz = z + dz[d];
            if (!isvalid(nx, ny, nz) || newMap[nx][ny][nz] == 0) continue;
            if (dist[nx][ny][nz] != MAX) continue;
            q.push(getPos(nx, ny, nz));
            dist[nx][ny][nz] = dist[x][y][z] + 1;
        }
    }
    return dist[N - 1][N - 1][N - 1];
}

void dfs(int n) {
    if (n == N) {
        minDist =min(minDist, findPath());
        return;
    }
    for (int i = 0; i < 4; i++) {
        rotateCnt[n] = i;
        dfs(n + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                cin >> map[i][0][j][k];
            }
        }
    }
    rotateMap();
    do {
        dfs(0);
    } while (next_permutation(mapIndex, mapIndex + N));
    if (minDist != MAX) {
        cout << minDist << '\n';
    } else {
        cout << -1 << '\n';
    }
    return 0;
}
