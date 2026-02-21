#include <bits/stdc++.h>
using namespace std;

int answer[10];
int cnt = 0;

void dfs(int idx, int pprev, int prev, int score)
{
    if (idx == 10) {
        if (score >= 5) cnt++;
        return ;
    }

    for (int i = 1; i <= 5; i++) {
        if (pprev == prev && prev == i) continue;

        int newScore = score;
        if (i == answer[idx]) newScore++;

        dfs(idx + 1, prev, i, newScore);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 10; i++)
        cin >> answer[i];

    dfs(0, 0, 0, 0);
    cout << cnt << '\n';
}