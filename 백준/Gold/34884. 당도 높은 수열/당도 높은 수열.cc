#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int ans[150005];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n = 150000;
    int curr = n;
    
    queue<pair<int, int>> q;
    q.push({1, n});

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        int l = p.first;
        int r = p.second;
        
        if (l > r) continue;

        int mid = l + (r - l) / 2;
        ans[mid] = curr--;

        if (l <= mid - 1) q.push({l, mid - 1});
        if (mid + 1 <= r) q.push({mid + 1, r});
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }

    return 0;
}