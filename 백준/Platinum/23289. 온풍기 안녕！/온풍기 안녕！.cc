#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <queue>
#include <string>
using namespace std;

const int MAX = 25;

int R, C, K;
int room[MAX][MAX];
bool wall[MAX][MAX][4];
int heatMap[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int wx[4][3] = {{-1, 0, 1}, {-1, 0, 1}, {-1, -1, -1}, {1, 1, 1}};
int wy[4][3] = {{1, 1, 1}, {-1, -1, -1}, {-1, 0, 1}, {-1, 0, 1}};
int choco = 0;
vector<vector<int> > heater;
vector<pair<int, int> > therm;

void printRoom() {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << room[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

bool wallCheck(int x, int y, int d, int dir) {
    int fx, fy;
    int nx, ny;
    int dd;
    if (dir == 1) {
        return wall[x][y][d];
    }
    fx = wx[d][dir];
    fy = wy[d][dir];
    if (d == 0 || d == 1) {
        if (fx == -1) {
            dd = 2;
        } else {
            dd = 3;
        }
    } else {
        if (fy == -1) {
            dd = 1;
        } else {
            dd = 0;
        }
    }
    if (wall[x][y][dd]) return true;

    nx = x + dx[dd];
    ny = y + dy[dd];

    if (wall[nx][ny][d]) return true;
    return false;
}


void blow(int x, int y, int d) {
    int cx, cy, nx, ny;
    queue<pair<int, int> > q;
    for (int i = 0; i < R; i++) {
        fill(heatMap[i], heatMap[i] + C, 0);
    }
    cx = x + dx[d];
    cy = y + dy[d];
    if (cx < 0 || cx >= R || cy < 0 || cy >= C) return;    
    heatMap[cx][cy] = 5;
    q.push(make_pair(cx, cy));

    while (!q.empty()) {
        cx = q.front().first;
        cy = q.front().second;
        q.pop();
        for (int dir = 0; dir < 3; dir++) {
            nx = cx + wx[d][dir];
            ny = cy + wy[d][dir];
            if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if (heatMap[nx][ny] > 0) continue;
            if (wallCheck(cx, cy, d, dir)) continue;
            heatMap[nx][ny] = heatMap[cx][cy] - 1;
            if (heatMap[nx][ny] > 0) {
                q.push(make_pair(nx, ny));
            }
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            room[i][j] += heatMap[i][j];
        }
    }
}

void heat() {
    for (int i = 0; i < heater.size(); i++) {
        blow(heater[i][0], heater[i][1], heater[i][2]);
    }
}

void air() {
    int remain;
    int nx, ny;
    int diff;

    for (int i = 0; i < R; i++)
        fill(heatMap[i], heatMap[i] + C, 0);
    for (int x = 0; x < R; x++) {
        for (int y = 0; y < C; y++) {
            remain = room[x][y];
            for (int d = 0; d < 4; d++) {
                if (wall[x][y][d]) continue;
                nx = x + dx[d];
                ny = y + dy[d];
                if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
                if (room[nx][ny] < room[x][y]) {
                    diff = room[x][y] - room[nx][ny];
                    heatMap[nx][ny] += (diff / 4);
                    remain -= (diff / 4);
                }
            }
            heatMap[x][y] += remain;
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            room[i][j] = heatMap[i][j];
        }
    }
    for (int i = 0; i < R; i++) {
        if (room[i][0] > 0) {
            room[i][0]--;
        }
        if (room[i][C - 1] > 0) {
            room[i][C - 1]--;
        }
    }

    for (int i = 1; i < C - 1; i++) {
        if (room[0][i] > 0) {
            room[0][i]--;
        }
        if (room[R - 1][i] > 0) {
            room[R - 1][i]--;
        }
    }
}

bool thermoCheck() {
    for (int i = 0; i < therm.size(); i++) {
        if (room[therm[i].first][therm[i].second] < K)
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int W;
    int x, y, t;
    int tmp;

    cin >> R >> C >> K;
    for (int i = 0; i < R; i++) 
        fill(room[i], room[i] + C, 0);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            fill(wall[i][j], wall[i][j] + 4, false);
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> tmp;
            if (tmp > 0 && tmp < 5) {
                vector<int> pos(3);
                pos[0] = i;
                pos[1] = j;
                pos[2] = tmp - 1;
                heater.push_back(pos);
            } else if (tmp == 5) {
                therm.push_back(make_pair(i, j));
            }
        }
    }
    cin >> W;
    for (int i = 0; i < W; i++) {
        cin >> x >> y >> t;
        x--;
        y--;
        if (t == 0) {
            wall[x][y][2] = true;
            wall[x - 1][y][3] = true;
        } else if (t == 1) {
            wall[x][y][0] = true;
            wall[x][y + 1][1] = true;
        }
    }
    while (choco <= 100) {
        heat();
        air();
        choco++;
        if (thermoCheck())
            break;
    }
    // printRoom();
    cout << choco << '\n';
    return 0;
}