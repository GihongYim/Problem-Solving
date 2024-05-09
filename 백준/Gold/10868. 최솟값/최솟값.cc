#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int MAX = 100005;
const int INF = 0x3f3f3f3f;


int N, M;
int arr[MAX];
int tree[MAX * 4];


int init(int node, int left, int right) {
    if (left == right) {
        return tree[node] = arr[left];
    }

    int mid = (left + right) / 2;
    return tree[node] = 
        min(init(2 * node, left, mid)
            ,init(2 * node + 1, mid + 1, right));
}

int searchMin(int node, int left, int right, int a, int b) {
    if (right < a || left > b) {
        return INF;
    }

    if (left >= a && right <= b) {
        return tree[node];
    }
    int mid = (left + right) / 2;
    return min(searchMin(2 * node, left, mid, a, b),
        searchMin(2 * node + 1, mid + 1, right, a, b));
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    init(1, 0, N - 1);
    
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        cout << searchMin(1, 0, N - 1, a - 1, b - 1) << '\n';
    }
    return 0;
}