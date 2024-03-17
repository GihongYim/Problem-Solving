#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


const int MAX = 10;
const int DMAX = 2 * MAX;
int n;
int board[MAX][MAX];
bool diag[DMAX];
int maxCnt = 0;


void bishop(int m, int cnt) {
    maxCnt = max(maxCnt, cnt);
    if (m > 2 * n - 2)
        return;
    int row = min(m, n - 1);
    int col = m - row;
    for (int i = row, j = col; i >= 0; i--, j++) {
        if (j >= n) break;
        if (board[i][j] == 1 && !diag[n - 1 - i + j]) {
            diag[n - 1 - i + j] = true;
            bishop(m + 2, cnt + 1);
            diag[n - 1 - i + j] = false;
        }
    }
    bishop(m + 2, cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    fill(diag, diag + DMAX, false);
    maxCnt = 0;
    bishop(0, 0);
    int result = maxCnt;
    // cout << maxCnt << '\n';
    maxCnt = 0;
    bishop(1, 0);
    result += maxCnt;
    cout << result << '\n';

    return 0;
}