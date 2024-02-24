#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M;
    string map[51];
    bool cols[51];
    bool rows[51];
    int r_cnt = 0;
    int c_cnt = 0;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> map[i];
    }
    fill(cols, cols + 51, false);
    fill(rows, rows + 51, false);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (map[i][j] == 'X') {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (rows[i] == 0)
            r_cnt++;
    }

    for (int i = 0; i < M; i++) {
        if (cols[i] == 0)
            c_cnt++;
    }
    cout << max(r_cnt, c_cnt) << '\n';
    return 0;
}