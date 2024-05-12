#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

const int NODE = 1001;
const int INF = 0x3f3f3f3f;
int N, M;
vector<pair<int, int> > adj[NODE];
int dist[NODE];

void bfs(int n) 
{
    fill(dist, dist + NODE, INF);
    
    queue<int> q;

    q.push(n);
    dist[n] = 0;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (auto nxt : adj[curr]) {
            if (dist[curr] + nxt.second < dist[nxt.first]) {
                dist[nxt.first] = dist[curr] + nxt.second;
                q.push(nxt.first);
            }
        }
    }
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N - 1; i++) {
        int a, b, l;
        cin >> a >> b >> l;
        adj[a].push_back(make_pair(b, l));
        adj[b].push_back(make_pair(a, l));
    }
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        bfs(a);
        cout << dist[b] << '\n';
    }
    return 0;
}