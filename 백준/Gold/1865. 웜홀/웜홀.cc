#include <iostream>
#include <string>
#include <vector>

#define MAX 30000000
using namespace std;

int n, m, w;

struct edge{
    int s, e, t;
};

bool time_travel(int n, vector<edge> edges)
{
    vector<int> dist(n + 1, MAX);

    int s, e, t;
    dist[1] = 0;

    for(int i = 1; i < n; i++)
    {
        for (int j = 0; j < edges.size();j++)
        {
            s = edges[j].s;
            e = edges[j].e;
            t = edges[j].t;
            if (dist[e] > dist[s] + t){
                dist[e] = dist[s] + t;
            }
        }
    }
    for (int j = 0; j < edges.size(); j++)
    {
        s = edges[j].s;
        e = edges[j].e;
        t = edges[j].t;
        if (dist[e] > dist[s] + t){
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int TC;
    cin >> TC;

    int s, e, t;
    for (int test_case = 1; test_case <= TC; test_case++)
    {
        cin >> n >> m >> w;
        vector<edge> edges;
        for (int i = 0; i < m; i++){
            cin >> s >> e >> t;
            edges.push_back({s,e,t});
            edges.push_back({e,s,t});
        }
        for (int i = 0; i < w; i++){
            cin >> s >> e >> t;
            edges.push_back({ s,e,-t});
        }

        if(time_travel(n,edges)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}