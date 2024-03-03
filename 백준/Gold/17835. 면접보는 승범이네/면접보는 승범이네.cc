#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define ll long long

const ll MAX = 100005;
const ll INF = 1e18;
vector<pair<ll, ll>> adj[MAX];
ll d[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll N, M, K;

    cin >> N >> M >> K;
    for (int i = 0; i < M; i++) {
        int U, V, C;
        cin >> U >> V >> C;
        adj[V].push_back(make_pair(C, U));
    }
    fill(d, d + N + 1, INF);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for (int i = 0; i < K; i++) {
        int city;
        
        cin >> city;
        
        d[city] = 0;
        pq.push(make_pair(0, city));
    }
    while (!pq.empty()) {
        auto curr = pq.top(); pq.pop();
        if (d[curr.second] < curr.first) continue;
        for (auto next : adj[curr.second]) {
            if (d[next.second] <= d[curr.second] + next.first) continue;
            d[next.second] = d[curr.second] + next.first;
            pq.push(make_pair(d[next.second], next.second));
        }
    }
    int maxCity = 1;
    ll maxValue = 0;
    for (int i = 1; i <= N; i++) {
        if (d[i] > maxValue) {
            maxValue = d[i];
            maxCity = i;
        }
    }
    cout << maxCity << '\n';
    cout << maxValue << '\n';
    return 0;
}