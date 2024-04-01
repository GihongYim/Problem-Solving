#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int M, S;
int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dirX[5] = {0, -1, 0, 1, 0};
int dirY[5] = {0, 0, -1, 0, 1};
int smell[4][4];
int sx, sy;
int maxEat;
int maxHistory;
int visited[4][4];

vector<int> fishes[4][4];
vector<int> newFishes[4][4];

void moveFish(int x, int y, vector<int>& fish) {
    int nx, ny;
    int dd, retD;
    bool moved;
    for (int idx = 0; idx < fish.size(); idx++) {
        dd = fish[idx];
        moved = false;
        for (int d = 0; d < 8; d++) {
            retD = (dd - d + 8) % 8;
            nx = x + dx[retD];
            ny = y + dy[retD];
            if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4) continue;
            if (nx == sx && ny == sy) continue;
            if (smell[nx][ny] > 0) continue;
            newFishes[nx][ny].push_back((retD));
            moved = true;
            break;
        }
        if (!moved)
            newFishes[x][y].push_back(dd);
    }
}

void moveFishes() {
    for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 4; y++) {
            moveFish(x, y, fishes[x][y]);
        }
    }
}

void dfs(int x, int y, int eat, int history) {
    int nx, ny;
    if (history >= 111) {
        if (eat > maxEat) {
            maxEat = eat;
            maxHistory = history;
        } else if (eat == maxEat) {
            if (history < maxHistory) {
                maxEat = eat;
                maxHistory = history;
            }
        }
        return ;
    }
    for (int d = 1; d <= 4; d++) {
        nx = x + dirX[d];
        ny = y + dirY[d];

        if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4) continue;
        visited[nx][ny] += 1;
        if (visited[nx][ny] == 1)
            dfs(nx, ny, eat + newFishes[nx][ny].size(), history * 10 + d);
        else
            dfs(nx, ny, eat, history * 10 + d);
        visited[nx][ny] -= 1;
    }
}

void moveShark() {
    int num = 100;
    int dir;

    maxEat = -1;
    maxHistory = 9999;
    for (int i = 0; i < 4; i++) {
        fill(visited[i], visited[i] + 4, 0);
    }
    dfs(sx, sy, 0, 0);
    for (int i = 0; i < 3; i++) {
        dir = maxHistory / num;
        sx += dirX[dir];
        sy += dirY[dir];
        if (!newFishes[sx][sy].empty()) {
            smell[sx][sy] = 3;
            newFishes[sx][sy].clear();
        }
        maxHistory -= (dir * num);
        num /= 10;
    }
}

void spawnFish() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < newFishes[i][j].size(); k++) {
                fishes[i][j].push_back(newFishes[i][j][k]);
            }
        }
    }
}

void purify() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (smell[i][j] > 0)
                smell[i][j]--;
        }
    }
}

int countFish() {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cnt += fishes[i][j].size();
        }
    }
    return cnt;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    for (int i = 0; i < 4; i++) fill(smell[i], smell[i] + 4, 0);

    cin >> M >> S;
    for (int i = 0; i < M; i++) {
        int fx, fy, d;
        cin >> fx >> fy >> d;
        fishes[fx - 1][fy - 1].push_back(d - 1);
    }
    cin >> sx >> sy;
    sx -= 1;
    sy -= 1;
    while (S--) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                newFishes[i][j].clear();
            }
        }
        moveFishes();
        moveShark();
        purify();
        spawnFish();
    }
    cout << countFish() << '\n';
    return 0;
}
