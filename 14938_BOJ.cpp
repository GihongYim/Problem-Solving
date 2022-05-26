#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void init(int dist[], int n)
{
    for (int i = 0; i <= n; i++)
        dist[i] = 0x3f3f3f3f;
}

int get_item(int dist[], int item[], int n, int m)
{
    int temp = 0;

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] <= m)
            temp += item[i];
    }
    return temp;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n, m, r;
    int item[101];
    int dist[101];
    int item_max = -1;
    int temp;
    vector<pair<int, int>> adj[101];

    cin >> n >> m >> r;
    int t;
    for (int i = 1 ; i <= n; i++)
    {
        cin >> t;
        item[i] = t;
    }
    int a, b, l;
    for (int i = 0; i < r; i++)
    {
        cin >> a >> b >> l;
        adj[a].push_back({b,l});
        adj[b].push_back({a,l});
    }
    for (int i = 1; i <= n; i++)
    {
        init(dist, n);
        queue<int> q;
        dist[i] = 0;
        q.push(i);

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            for (auto u: adj[curr])
            {
                if (dist[curr] + u.second < dist[u.first])
                {
                    dist[u.first] = dist[curr] + u.second;
                    q.push(u.first);
                }
            }
        }
        temp = get_item(dist, item, n, m);
        if (temp > item_max)
            item_max = temp;
    }
    cout << item_max;
    return 0;
}