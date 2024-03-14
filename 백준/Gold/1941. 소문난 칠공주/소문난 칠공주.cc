#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int N = 5;

string map[N];
bool visited[N][N];
bool check[N][N];
int cnt = 0;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};


bool checknbr() {
    
    int x = -1;
    int y = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (visited[i][j]) {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1)
            break;
    }
    queue<pair<int, int >> q;
    for (int i = 0; i < N; i++) {
        fill(check[i], check[i] + N, false);
    }
    q.push(make_pair(x, y));
    check[x][y] = true;
    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int d = 0; d < 4; d++) {
            int nx = cur.first + dx[d];
            int ny = cur.second + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N)  continue;
            if (check[nx][ny]) continue;
            if (!visited[nx][ny]) continue;
            check[nx][ny] = true;
            q.push(make_pair(nx, ny));
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (visited[i][j] && !check[i][j]) return false;
        }
    }
    return true;
}

void search(int x, int y, int s, int len) {
    if (len == 7) {
        if (s >= 4 && checknbr()) {
            cnt++;
        }
        return ;
    }
    if (7 - len + s < 4) {
        return;
    }
    if (len == 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                visited[i][j] = true;
                if (map[i][j] == 'S') {
                    search(i, j, 1, 1);
                } else {
                    search(i, j, 0, 1);
                }
                visited[i][j] = false;
            }
        }
    } else {
        int yy = y + 1;
        for (int i = x; i < N; i++) {
            for (int j = yy; j < N; j++) {
                visited[i][j] = true;
                if (map[i][j] == 'S') {
                    search(i, j, s + 1, len + 1);
                } else {
                    search(i, j, s, len + 1);
                }
                visited[i][j] = false;
            }
            yy = 0;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for (int i = 0; i < N; i++) {
        cin >> map[i];
    }
    for (int i = 0; i < N; i++) {
        fill(visited[i], visited[i] + N, false);
    }
    search(0, 0, 0, 0);
    cout << cnt << '\n';
    return 0;
}