#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define MAXN 1002
#define MAXM 102
int N, M;
int inDeg[MAXN];
vector<int> pd[MAXM];
vector<int> adj[MAXN];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> N >> M;
    fill(inDeg, inDeg + N, 0);
    for (int i = 0; i < M; i++) {
        int order;
        cin >> order;
        vector<int> tmp(order);
        for (int j = 0; j < order; j++) {
            cin >> tmp[j];
        }
        pd[i] = tmp;
        for (int j = 0; j < pd[i].size() - 1; j++) {
            adj[pd[i][j]].push_back(pd[i][j + 1]);
        }
        for (int j = 1; j < pd[i].size(); j++) {
            inDeg[pd[i][j]]++;
        }
    }
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        if (inDeg[i] == 0) {
            q.push(i);
        }
    }
    vector<int> answer;
    while (!q.empty()) {
        int curr = q.front();
        answer.push_back(curr);
        q.pop();
        for (int d = 0; d < adj[curr].size(); d++) {
            inDeg[adj[curr][d]]--;
            if (inDeg[adj[curr][d]] == 0)
                q.push(adj[curr][d]);
        }
    }
    if (answer.size() != N)
        cout << "0\n";
    else {
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i] << '\n';
        }
    }
    return 0;
}