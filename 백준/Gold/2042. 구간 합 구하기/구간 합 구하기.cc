#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

const int MAX = 1000005;
int N, M, K;
ll arr[MAX];
ll tree[MAX * 4];

ll segmentTree(int node, int start, int end) {
    if (start == end) {
        tree[node] = arr[start];
        return tree[node];
    }

    int mid = (start + end) / 2;
    ll leftSum = segmentTree(node * 2, start, mid);
    ll rightSum = segmentTree(node * 2 + 1, mid + 1, end);
    tree[node] = leftSum + rightSum;
    return tree[node];
}

ll treeSum(int node, int start, int end, int left, int right) {
    if (left > end || right < start) return 0;
    if (left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;
    ll leftSum = treeSum(node * 2, start, mid, left, right);
    ll rightSum = treeSum(node * 2 + 1, mid + 1, end, left, right);
    return leftSum + rightSum;
}

void updateTree(int node, int start, int end, int index, ll diff) {
    if (index < start || index > end) return;
    tree[node] = tree[node] + diff;

    if (start != end) {
        int mid = (start + end) / 2;
        updateTree(node * 2, start, mid, index, diff);
        updateTree(node * 2 + 1, mid + 1, end, index, diff);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a;

    cin >> N >> M >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    segmentTree(1, 0, N - 1);
    for (int i = 0; i < M + K; i++) {
        cin >> a;
        if (a == 1) {
            int b;
            ll c;
            cin >> b >> c;
            ll diff = c - arr[b - 1];
            arr[b - 1] = c;
            updateTree(1, 0, N - 1, b - 1, diff);
        } else {
            int b, c;
            cin >> b >> c;
            cout << treeSum(1, 0, N - 1, b - 1, c - 1) << '\n';
        };
    }
    return 0;
}