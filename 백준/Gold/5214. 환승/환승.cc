#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define ll long long

const int MAX = 100005;
const ll INF = 0x3f3f3f3f;
int N, K, M;

vector<int> adj[MAX];
int dist[MAX];
bool visited[1005];
vector<int> path[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K >> M;
    fill(dist, dist + N + 1, INF);
    fill(visited, visited + 1005, false);
    for (int i = 1; i <= M; i++) {
        for (int j = 0; j < K; j++) {
            int station;
            cin >> station;
            path[i].push_back(station);
        }
    }
    for (int i = 1; i <= M; i++) {
        for(auto station : path[i]) {
            adj[station].push_back(i);
        }
    }
    queue<int> q;

    q.push(1);
    dist[1] = 1;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        for (auto tube : adj[curr]) {
            if (visited[tube]) continue;
            visited[tube] = true;
            for (auto nxt : path[tube]) {
                if (nxt == curr) continue;
                if (dist[nxt] != INF) continue;
                dist[nxt] = dist[curr] + 1;
                q.push(nxt);
            }
        }
    }
    if (dist[N] == INF) {
        cout << "-1\n";
    } else {
        cout << dist[N] << '\n';
    }
    return 0;
}