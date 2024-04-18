#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9;
const int MAX = 401;
int V, E;
int dist[MAX][MAX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b, c;

    cin >> V >> E;
    for (int i = 0; i <= V; i++)
        fill(dist[i], dist[i] + V + 1, INF);
    for (int i = 1; i <= V; i++)
        dist[i][i] = 0;
    for (int i = 0; i < E; i++) {
        cin >> a >> b >> c;
        dist[a][b] = c;
    }
    for (int mid = 1; mid <= V; mid++) {
        for (int i = 1; i <= V; i++) {
            for (int j = 1; j <= V; j++) {
                if (i == j) continue;
                dist[i][j] = min(dist[i][j], dist[i][mid] + dist[mid][j]);
            }
        }
    }
    int minDist = INF;
    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            if (i == j) continue;
            minDist = min(minDist, dist[i][j] + dist[j][i]);
        }
    }
    if (minDist == INF) {
        cout << "-1\n";
    } else {
        cout << minDist << '\n';
    }

    return 0;
}