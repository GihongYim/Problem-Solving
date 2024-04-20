#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, H;
bool ladder[31][12];
bool added[31][12];
int numbers[11];
int result = 0x3f3f3f3f;

bool check() {
    for (int i = 1; i <= N; i++)
        numbers[i] = i;
    int tmp;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= N; j++) {
            if (ladder[i][j] || added[i][j]) {
                tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;
            }
        }
    }
    for (int i = 1; i <= N; i++)  {
        if (numbers[i] != i)
            return false;
    }
    return true;
}

void dfs(int h, int w, int cnt) {

    if (cnt > 3)
        return;
    if (cnt >= result)
        return;
    // cout << h << ' ' << w << ' ' << cnt << '\n';
    if (check()) {
        result = min(result, cnt);
        return;
    }

    
    for (int i = h; i <= H; i++) {
        for (int j = w; j < N; j++) {
            if ((!ladder[i][j] && !added[i][j]) && !(added[i][j - 1] || ladder[i][j - 1])
            && !(added[i][j + 1] || ladder[i][j + 1])) {
                added[i][j] = true;
                dfs(i, j + 1, cnt + 1);
                added[i][j] = false;
            }
        }
        w = 1;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> M >> H;
    for (int i = 0; i <= H; i++) {
        fill(ladder[i], ladder[i] + N + 2, false);
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        ladder[a][b] = true;
    }
    dfs(1, 1, 0);
    if (result == 0x3f3f3f3f)
        cout << -1 << '\n';
    else 
        cout << result << '\n';
    return 0;
}