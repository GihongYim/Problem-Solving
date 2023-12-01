#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define INF 0x3f3f3f3f
#define BITS 32
int n, m;
int p[100005];
int dist[1000005];
bool visited[1000005];

int get_binary_dist(int a, int b)
{
    int answer = 0;
    int diff = a ^ b;
    for (int i = 0; i < BITS; i++) {
        if (diff & (1 << i))
            answer++;
    }
    return answer;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }
    fill(dist, dist + n + 1, 0);
    fill(visited, visited + n + 1, false);
    queue<int> q;
    for (int i = 0; i < m; i++) {
        q.push(p[i]);
        dist[p[i]] = 0;
        visited[p[i]] = true;
    }
    int next;
    int next_dist;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int i = 0; i < BITS; i++) {
            next = (curr ^ (1 << i));
            // cout << next << '\n';
            if (next >= 0 && next <= n && visited[next] == 0) {
                visited[next] = 1;
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }
    int maxDist = -1;
    for (int i = 0; i <= n; i++) {
        maxDist = max(maxDist, dist[i]);
    }
    cout << maxDist << '\n';
    return 0;
}