#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

#define ll long long

const ll INF = LLONG_MAX;
const int MAX = 100001;

int N, M, A, B;
ll C;
ll d[MAX];
ll hum[MAX];
vector<pair<int, ll>> adj[MAX];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M >> A >> B >> C;
    fill(d, d + N + 1, C + 1);
    fill(hum, hum + N + 1, INF);
    for (int i = 0; i < M; i++) {
        int src, dst;
        ll weight;
        cin >> src >> dst >> weight;
        adj[src].push_back(make_pair(dst, weight));
        adj[dst].push_back(make_pair(src, weight));
    }
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>> > pq;
    d[A] = 0;
    hum[A] = 0;
    pq.push(make_pair(0, A));
    while (!pq.empty()) {
        auto curr = pq.top(); pq.pop();
        
        if (curr.first != hum[curr.second]) continue;
        for (auto next : adj[curr.second]) {
            ll h = max(curr.first, next.second);
            if (h < hum[next.first] && d[curr.second] + next.second <= C) {
                hum[next.first] = h;
                d[next.first] = d[curr.second] + next.second;
                pq.push(make_pair(h, next.first));
            } else if (h == hum[next.first] && d[curr.second] + next.second < d[next.first]) {
                hum[next.first] = h;
                d[next.first] = d[curr.second] + next.second;
                pq.push(make_pair(h, next.first));
            }
        }
    }
    // cout << d[B] << ' ' << hum[B] << '\n';
    if (d[B] == C + 1) {
        cout << -1 << '\n';
    } else {
        cout << hum[B] << '\n';
    }
    return 0;
}