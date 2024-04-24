#include <iostream>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
const int MAX = 300005;

int N, K;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll m, v;

    ll result = 0;

    cin >> N >> K;
    priority_queue<pair<ll, ll> > q;
    for (int i = 0; i < N; i++) {
        cin >> m >> v;
        q.push(make_pair(v, m));
    }
    map<ll, int> c;
    map<ll, int>::iterator it;
    for (int i = 0; i < K; i++) {
        ll bag;
        cin >> bag;
        if (c.find(bag) == c.end()) {
            c.insert(make_pair(bag, 0));
        }
        c[bag] += 1;
    }
    // sort(c.begin(), c.end());
    while (!q.empty() && !c.empty()) {
        v = q.top().first;
        m = q.top().second;
        q.pop();
        it = c.lower_bound(m);
        if (it == c.end()) continue;
        c[it->first] -= 1;
        if (c[it->first] == 0)
            c.erase(it);
        result += v;
    }
    cout << result << '\n';
    return 0;
}