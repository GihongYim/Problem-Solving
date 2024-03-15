#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 8;

int N;
int s[MAX];
int w[MAX];
int maxBroken = 0;

void search(int n, int cnt) {
    if (n == N) {
        maxBroken = max(maxBroken, cnt);
        return;        
    }
    if (s[n] <= 0) {
        search(n + 1, cnt);
        return;
    }
    if (cnt >= N - 1) {
        maxBroken = max(maxBroken, cnt);
        return;
    }
    int broken = 0;
    for (int i = 0; i < N; i++) {
        if (i == n) continue;
        if (s[i] <= 0) continue;
        s[i] -= w[n];
        s[n] -= w[i];
        broken = 0;
        if (s[i] <= 0) 
            broken++;
        if (s[n] <= 0)
            broken++;
        search(n + 1, cnt + broken);
        s[i] += w[n];
        s[n] += w[i];
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s[i] >> w[i];
    }
    search(0, 0);
    cout << maxBroken << '\n';
    return 0;
}