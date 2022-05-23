#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int V;
int src,dst,len;
int dist[100005];
vector<pair<int, int>> adj[100005];
queue<int> q;

void init()
{
    while (!q.empty())
        q.pop();
    for (int i = 0; i <= V; i++)
        dist[i] = 0x3f3f3f3f;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> V;
    for (int i = 0; i < V; i++)
    {
        cin >> src;
        while (1)
        {
            cin >> dst;
            if (dst == -1)
                break;
            cin >> len;
            adj[src].push_back({dst, len});
            adj[dst].push_back({src, len});
        }
    }
    init();
    dist[1] = 0;
    q.push(1);
    
    int curr;
    while (!q.empty())
    {
        curr = q.front();
        q.pop();

        for (auto u : adj[curr])
        {
            if (dist[curr] + u.second < dist[u.first])
            {
                dist[u.first] = dist[curr] + u.second;
                q.push(u.first);
            }
        }
    }
    int mid = 1;
    for (int i = 1; i <= V; i++)
    {
        if(dist[mid] < dist[i])
            mid = i;
    }
    init();
    dist[mid] = 0;
    q.push(mid);
    
    while (!q.empty())
    {
        curr = q.front();
        q.pop();

        for (auto u : adj[curr])
        {
            if (dist[curr] + u.second < dist[u.first])
            {
                dist[u.first] = dist[curr] + u.second;
                q.push(u.first);
            }
        }
    }
    int dest = 1;
    for (int i = 1; i <= V; i++)
    {
        if(dist[dest] < dist[i])
            dest = i;
    }
    cout << dist[dest] << '\n';

    return (0);
}