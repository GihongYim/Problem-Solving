#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct cmp {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, L;
    priority_queue<pair<int, int>, vector<pair<int, int> >, cmp> pq;

    cin >> N >> L;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        pq.push(make_pair(i, a));
        while (pq.top().first < i - L + 1)
            pq.pop();
        cout << pq.top().second << ' ';
    }
    return 0;
}