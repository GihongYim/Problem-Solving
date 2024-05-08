#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long

const int MAX = 100005;
const ll INF = 10000000005LL;
ll a[MAX];
ll tree[MAX * 4];

ll segmentTree(int node, int left, int right) {
    int mid;
    if (left == right) {
        return tree[node] = a[left];
    }
    mid = (left + right) / 2;
    return tree[node] = min(segmentTree(2 * node, left, mid),
        segmentTree(2 * node + 1, mid + 1, right));
}

ll update(int node, int left, int right, int target, ll value)
{
    int mid;
    if (target < left || target > right) return tree[node];
    if (left == right) {
        tree[node] = value;
        return tree[node];
    }
    mid = (left + right) / 2;
    return tree[node] = min(update(2 * node, left, mid, target, value),
                update(2 * node + 1, mid + 1, right, target, value));
}

ll getMin(int node, int left, int right, int s, int t){

    int mid;

    if (right < s || left > t) {
        return INF;
    }

    mid = (left + right) / 2;
    if (s <= left && right <= t) {
        return tree[node];
    }
    return min(getMin(2 * node, left, mid, s, t),
            getMin(2 * node + 1, mid + 1, right, s, t));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N, M;
    int cmd, s;
    ll minValue;

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    segmentTree(1, 0, N - 1);
    cin >> M;
    for (int m = 0; m < M; m++) {
        cin >> cmd;
        if (cmd == 1) {
            ll t;
            cin >> s >> t;
            update(1, 0, N - 1, s - 1, t);
            a[s - 1] = t;
        } else if (cmd == 2) {
            int t;
            cin >> s >> t;
            minValue = getMin(1, 0, N - 1, s - 1, t - 1);
            for (int i = s - 1; i <= t - 1; i++) {
                if (minValue == a[i]) {
                    cout << i + 1 << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}