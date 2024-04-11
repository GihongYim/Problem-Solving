#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m;
    long long total = 0;

    cin >> n >> m;
    priority_queue<long long, vector<long long>, greater<long long> > q;
    long long num;
    long long a, b;
    for (int i = 0; i < n; i++) {
        cin >> num;  
        q.push(num);
    }
    for (int i = 0; i < m; i++) {
        a = q.top(); q.pop();
        b = q.top(); q.pop();
        a += b;
        q.push(a);
        q.push(a);
    }
    while (!q.empty()) {
        total += q.top(); q.pop();
    }
    cout << total << '\n';

    return 0;
}