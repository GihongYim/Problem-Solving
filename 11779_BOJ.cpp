#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF 2000000000

int n, m;
int dist[1010];
int cnt[1010];
int pre[1010];
int Start, End;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    vector <pair<int, int>> adj[1005];

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
   
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b,c});
    }
    cin >> Start >> End;

    priority_queue<pair<int, int>> pq;
    pq.push({0, Start});
    dist[Start] = 0;

    while (!pq.empty())
    {
        int cost = -pq.top().first;
        int curr = pq.top().second;
        pq.pop();

        if(cost > dist[curr])
            continue;

        for (int i = 0; i < adj[curr].size(); i++)
        {
            int next = adj[curr][i].first;
            int ncost = adj[curr][i].second;
            if (dist[next] > cost + ncost)
            {
                dist[next] = cost + ncost;
                pq.push({-dist[next], next});
                pre[next] = curr;
            }
        }
    }

    cout << dist[End] << '\n';

    vector<int> route;
    int temp = End;
    while (temp)
    {
        route.push_back(temp);
        temp = pre[temp];
    }
    cout << route.size() << '\n';
    for (int i = route.size() - 1; i >= 0; i--)
        cout << route[i] << ' ';
    cout << '\n';
    return (0);
}