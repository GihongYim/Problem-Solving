#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;


#define pairVector vector<pair<int, int>> 
const int LEN = 50;
const int MAX = 10000;

int N, M;
int map[LEN][LEN];
int dist[LEN][LEN];
int result = MAX;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};


void bfs(pairVector& target) {
    for (int i = 0; i < N; i++) {
        fill(dist[i], dist[i] + N, MAX);
    }
    queue<pair<int, int >> q;

    for (auto virus : target) {
        q.push(virus);
        dist[virus.first][virus.second] = 0;
    }
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (map[nx][ny] == 1) continue;
            if (dist[x][y] + 1 >= dist[nx][ny]) continue;
            dist[nx][ny] = dist[x][y] + 1;
            q.push(make_pair(nx, ny));
        }
    }
    int longest = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] == 1) continue;
            if (dist[i][j] == MAX) {
                return;
            }
            longest = max(longest, dist[i][j]);
        }
    }
    result = min(result, longest);
}


void virusStart(int n, int cnt, pairVector& target, pairVector& candi) {
    if (target.size() == M) {
        bfs(target);
        return;
    }
    if (n == candi.size()) {
        return;
    }

    target.push_back(candi[n]);
    virusStart(n + 1, cnt + 1, target, candi);
    target.pop_back();
    virusStart(n + 1, cnt, target, candi);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    pairVector candi;
    pairVector target;
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
            if (map[i][j] == 2) {
                candi.push_back(make_pair(i, j));
            }
        }
    }
    virusStart(0, 0, target, candi);
    if (result == MAX) {
        cout << "-1\n";
    } else {
        cout << result << '\n';
    }
    return 0;
}