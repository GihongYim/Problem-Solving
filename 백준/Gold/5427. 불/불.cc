#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int w, h;
char map[1001][1001];
int fire[1001][1001];
int player[1001][1001];
int dx[4] = {-1 ,1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool outOfBound(int x, int y) {
    if (x < 0 || x >= h || y < 0 || y >= w)
        return true;
    else
        return false;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test_case;
    int x, y, nx, ny;
    bool escape;
    cin >> test_case;

    for (int t = 0; t < test_case; t++) {
        cin >> w >> h;
        queue<pair<int, int> > fire_q;
        queue<pair<int, int> > player_q;
        
        for (int i = 0; i < h; i++) {
            fill(fire[i], fire[i] + w, -1);
            fill(player[i], player[i] + w, -1);
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> map[i][j];
                if (map[i][j] == '*') {
                    fire_q.push(make_pair(i, j));
                    fire[i][j] = 0;
                }
                if (map[i][j] == '@') {
                    player_q.push(make_pair(i, j));
                    player[i][j] = 0;
                }
            }
        }
        while (!fire_q.empty()) {
            x = fire_q.front().first;
            y = fire_q.front().second;
            fire_q.pop();
            for (int d = 0; d < 4; d++) {
                nx = x + dx[d];
                ny = y + dy[d];
                if (outOfBound(nx, ny) || map[nx][ny] == '#'|| fire[nx][ny] != -1) continue;
                fire[nx][ny] = fire[x][y] + 1;
                fire_q.push(make_pair(nx, ny));
            }
        }
        escape = false;
        while (!player_q.empty()) {
            x = player_q.front().first;
            y = player_q.front().second;
            player_q.pop();
            for (int d = 0; d < 4; d++) {
                nx = x + dx[d];
                ny = y + dy[d];
                if (outOfBound(nx, ny)) {
                    escape = true;
                    cout << player[x][y] + 1 << '\n';
                    break;
                }
                if (map[nx][ny] == '#' || player[nx][ny] != -1 || (fire[nx][ny] != -1 && player[x][y] + 1 >= fire[nx][ny])) continue;
                player[nx][ny] = player[x][y] + 1;
                player_q.push(make_pair(nx, ny));
            }
            if (escape)
                break;
        }
        if (!escape)
            cout << "IMPOSSIBLE\n";
    }
    return 0;
}