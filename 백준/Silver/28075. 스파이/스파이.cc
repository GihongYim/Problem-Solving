#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int work[6];
int answer = 0;
void dfs(int days, int last, int score) {
    if (days == n) {
        if (score >= m)
            answer++;
        return;
    }
    for (int i = 0; i < 6; i++) {
        if (last != -1 && (last % 3) == (i % 3)) {
            dfs(days + 1, i, score + work[i] / 2);
        } else {
            dfs(days + 1, i, score + work[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m;

    for (int i = 0; i < 6; i++)
        cin >> work[i];

    dfs(0, -1, 0);
    cout << answer << '\n';
    return 0;
}