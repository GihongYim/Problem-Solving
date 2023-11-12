#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

typedef struct s_castle
{
    int x;
    int y;
    int dist;
} Castle;

int N, M, P;
int s[10];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
string map[1000];
queue<Castle> q[10];


void bfs(int p) {
    Castle curr;
    queue<Castle> nq;

    while (!q[p].empty()) {
        curr = q[p].front();
        q[p].pop();
        if (curr.dist == 0) {
            nq.push(curr);
            continue;
        }
        for (int d = 0; d < 4; d++) {
            Castle next;
            next.x = curr.x + dx[d];
            next.y = curr.y + dy[d];
            next.dist = curr.dist - 1;
            if (next.x < 0 || next.x >= N || next.y < 0 || next.y >= M) continue;
            if (map[next.x][next.y] == '.') {
                map[next.x][next.y] = p + '0';
                q[p].push(next);
            }
        }
    }
    while (!nq.empty()){
        curr = nq.front();
        curr.dist = s[p];
        q[p].push(curr);
        nq.pop();
    }
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> P;
    for (int i = 1; i <= P; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> map[i];
        for (int j = 0; j < M; j++) {
            if (map[i][j] > '0' && map[i][j] <= '9') {
                Castle curr;
                curr.x = i;
                curr.y = j;
                curr.dist = s[map[i][j] - '0'];
                q[map[i][j] - '0'].push(curr);
            }
        }
    }
    bool finish;
    while (1) {
    
        for (int i = 1; i <= P; i++) {
            bfs(i);
        }
        finish = true;
        for (int i = 1; i <= P; i++) {
            if (!q[i].empty()) {
                finish = false;
                break;
            }
        }
        if (finish)
            break;
    }
    // for (int i = 0; i < M; i++) {
    //     cout << map[i] << '\n';
    // }
    int count[10];
    fill(count, count + 10, 0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (map[i][j] >= '0' && map[i][j] <= '9')
                count[map[i][j] - '0']++;
        }
    }
    for (int i = 1; i <= P; i++) {
        cout << count[i] << ' ';
    }
    cout << '\n';
    return 0;
}