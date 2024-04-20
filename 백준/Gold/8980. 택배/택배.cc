#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX = 10001;

typedef struct INFO
{
    int src;
    int dst;
    int box;
} info;
int N, C, M;
int truck[MAX];
info edge[MAX];

bool infoCmp(info a, info b) {
    if (a.dst == b.dst) {
        if (a.src == b.src) {
            return a.box < b.box;
        }
        return a.src < b.src;
    }
    return a.dst < b.dst;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> C;
    cin >> M;
    
    int src, dst, box;
    vector<info> e(M);
    for (int i = 0; i < M; i++) {
        cin >> e[i].src >> e[i].dst >> e[i].box;
    }
    sort(e.begin(), e.end(), infoCmp);

    int cnt = 0;
    int index = 0;
    fill(truck, truck + MAX, 0);
    for (int i = 0 ; i < M; i++) {
        int to = e[i].src;
        int from = e[i].dst;
        int box = e[i].box;
        int maxBox = 0;
        int dropBox;

        for (int pos = to; pos < from; pos++) {
            maxBox = max(maxBox, truck[pos]);
        }
        dropBox = min(C - maxBox, box);
        // cout << dropBox << '\n';
        for (int pos = to; pos < from; pos++) {
            truck[pos] += dropBox;
        }
        cnt += dropBox;
    }
    cout << cnt << '\n';
    return 0;
}