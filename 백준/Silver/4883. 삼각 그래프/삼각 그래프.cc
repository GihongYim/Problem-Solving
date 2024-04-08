#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX = 100005;

int N;
int K = 1;
int v[MAX][3];
int cost[MAX][3];

int d1[3][2] = {{1, 0}, {1, 1}, {0, 1}};
int d2[4][2] = {{1, -1}, {1, 0}, {1, 1}, {0, 1}};
int d3[2][2] = {{1, -1}, {1, 0}};


int main(void)
{

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    while (1) {

        cin >> N;
        if (N == 0)
            break;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < N; i++) {
            fill(cost[i], cost[i] + 3, 0x3f3f3f3f);
        }
        queue<pair<int, int> > q;
        cost[0][0] = 0x3f3f3f3f;
        cost[0][1] = v[0][1];
        cost[0][2] = 0x3f3f3f3f;
        q.push(make_pair(0, 1));

        int x, y, nx, ny;
        while (!q.empty()) {
            auto curr = q.front(); q.pop();
            x = curr.first;
            y = curr.second;
            if (y == 0) {
                for (int d = 0; d < 3; d++) {
                    nx = x + d1[d][0];
                    ny = y + d1[d][1];
                    if (cost[x][y] + v[nx][ny] < cost[nx][ny]) {
                        cost[nx][ny] = cost[x][y] + v[nx][ny];
                        q.push(make_pair(nx, ny));
                    }
                }
            } else if (y == 1) {
                for (int d = 0; d < 4; d++) {
                    nx = x + d2[d][0];
                    ny = y + d2[d][1];
                    if (cost[x][y] + v[nx][ny] < cost[nx][ny]) {
                        cost[nx][ny] = cost[x][y] + v[nx][ny];
                        q.push(make_pair(nx, ny));
                    }
                }           
            } else if (y == 2) {
                for (int d = 0; d < 2; d++) {
                    nx = x + d3[d][0];
                    ny = y + d3[d][1];
                    if (cost[x][y] + v[nx][ny] < cost[nx][ny]) {
                        cost[nx][ny] = cost[x][y] + v[nx][ny];
                        q.push(make_pair(nx, ny));
                    }
                }
            }
        }
        cout << K << ". " <<  cost[N - 1][1] << '\n';
        K++;
    }
    return 0;
}