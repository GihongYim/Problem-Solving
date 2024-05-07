#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define MOD 1000000007LL

const int MAX = 1000005;
ll arr[MAX];
ll tree[MAX * 5];

ll segmentTree(int node, int left, int right)
{
    ll leftValue;
    ll rightValue;
    if (left == right) {
        tree[node] = arr[left];
        return tree[node];
    }
    int mid = (left + right) / 2;

    leftValue = segmentTree(2 * node, left, mid);
    rightValue = segmentTree(2 * node + 1, mid + 1, right);
    tree[node] = (leftValue * rightValue) % MOD;
    return tree[node];
}

void changeTree(int node, int left, int right, int b, ll c)
{
    // cout << node << ' ' << left << ' ' << right << ' ' << b << ' ' << c << '\n';
    int mid;
    
    if (left == right) {
        tree[node] = c;
        return;
    }
    mid = (left + right) / 2;

    if (b <= mid) {
        changeTree(2 * node, left, mid, b, c);
    } else {
        changeTree(2 * node + 1, mid + 1, right, b, c);
    }
    tree[node] = (tree[2 * node] * tree[2 * node + 1]) % MOD;
}

ll partialMul(int node, int left, int right, int b, int c)
{
    int mid;

    ll leftValue, rightValue;

    if (right < b || left > c)
        return 1LL;
    
    if (left >= b && right <= c) {
        return tree[node];
    }
    mid = (left + right) / 2;

    leftValue = partialMul(2 * node, left, mid, b, c);
    rightValue = partialMul(2 * node + 1, mid + 1, right, b, c);
    return (leftValue * rightValue) % MOD;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N, M, K;
    int a;
    ll b, c;

    cin >> N >> M >> K;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    segmentTree(1, 0, N - 1);

    for (int i = 0; i < M + K; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            changeTree(1, 0, N - 1, b - 1, c);
        } else if (a == 2) {
            cout << partialMul(1, 0, N - 1, b - 1, c - 1) << '\n';
        }
    }
    return 0;
}