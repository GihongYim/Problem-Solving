#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N;
int originMap[101][101];
int map[101][101];
bool visited[101][101];
int conquer[101][101];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void checkLandNumber(int x, int y, int index) {
    queue<pair<int, int> > q;
    int cx, cy, nx, ny;

    q.push(make_pair(x, y));
    visited[x][y] = true;
    map[x][y] = index;

    while (!q.empty()) {
        cx = q.front().first;
        cy = q.front().second;
        q.pop();

        for (int d = 0; d < 4; d++) {
            nx = cx + dx[d];
            ny = cy + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (visited[nx][ny] || originMap[nx][ny] == 0) continue;
            visited[nx][ny] = true;
            map[nx][ny] = index;
            q.push(make_pair(nx, ny));
        }
    }
}

int getMinDist(int index) {
    int dist[101][101];
    int cx, cy, nx, ny;
    queue<pair<int, int> >q;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dist[i][j] = -1;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] == index) { 
                q.push(make_pair(i, j));
                dist[i][j] = 0;
            }
        }
    }
    while (!q.empty()) {
        cx = q.front().first;
        cy = q.front().second;

        q.pop();
        for (int d = 0; d < 4; d++) {
            nx = cx + dx[d];
            ny = cy + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (dist[nx][ny] != -1) continue;
            if (map[nx][ny] != 0 && map[nx][ny] != index)  {
                return dist[cx][cy];
            }
            dist[nx][ny] = dist[cx][cy] + 1;
            q.push(make_pair(nx, ny));
        }
    }
    return -1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cx, cy, nx, ny;
    int mindist = 1000000;
    queue<pair<int, int> > q;

    cin >> N;
    for (int i = 0; i < N; i++) {
        fill(visited[i], visited[i] + N, false);
        fill(map[i], map[i] + N, 0);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> originMap[i][j];
        }
    }
    int landNumber = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (originMap[i][j] == 1 && !visited[i][j]) {
                checkLandNumber(i, j, landNumber);
                landNumber++;
            }
        }
    }
    for (int i = 1; i < landNumber; i++) {
        mindist = min(mindist, getMinDist(i));
    }
    cout << mindist << '\n';
    return 0;
}