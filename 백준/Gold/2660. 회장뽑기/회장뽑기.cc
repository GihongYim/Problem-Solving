#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
const int MAX = 55;
int N;
vector<int> adj[MAX];
bool visited[MAX];
int dist[MAX];

void bfs(int n) {
    queue<int> q;

    visited[n] = true;
    dist[n] = 0;
    q.push(n);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (auto nxt : adj[curr]) {
            if (visited[nxt]) continue;
            visited[nxt] = true;
            dist[nxt] = dist[curr] + 1;
            q.push(nxt);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    while (1) {
        int u, v;
        cin >> u >> v;
        if (u == -1 && v == -1) break;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int president = 1;
    int minScore = 0x3f3f3f3f;
    vector<int> scores;
    for (int i = 1; i <= N; i++) {
        fill(visited, visited + 1 + N, false);
        fill(dist, dist + 1 + N, 0x3f3f3f3f);
        bfs(i);
        int score = 0;
        for (int j = 1; j <= N; j++) {
            if (score < dist[j])
                score = dist[j];
        }
        scores.push_back(score);
    }
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i] < minScore) {
            minScore = scores[i];
        }
    }
    vector<int> candi;
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i] == minScore) {
            candi.push_back(i + 1);
        }
    }
    cout << minScore << ' ' << candi.size() << '\n';
    for (int i = 0; i < candi.size(); i++) {
        cout << candi[i] << ' ';
    }
    cout << '\n';

    return 0;
}