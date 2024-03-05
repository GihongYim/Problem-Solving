#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const int INF = 0x3f3f3f3f;
int N, M, K;
int d[201][201];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        fill(d[i], d[i] + 1 + N, INF);
    }
    for (int i = 1; i <= N; i++) d[i][i] = 0;
    for (int i = 0; i < M; i++) {
        int a, b, t;
        cin >> a >> b >> t;
        d[a][b] = min(d[a][b], t);
    }
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    cin >> K;
    vector<int> city(K);
    vector<int> loop(N + 1);
    for (int i = 0; i < K; i++) {
        cin >> city[i];
    }
    for (int x = 1; x <= N; x++) {
        int maxValue = -1;
        for (int i = 0; i < K; i++) {
            maxValue = max(maxValue, d[city[i]][x] + d[x][city[i]]);
        }
        loop[x] = maxValue;
    }
    int loopMin = loop[1];
    for (int i = 2; i <= N; i++) {
        if (loop[i] < loopMin) {
            loopMin = loop[i];
        }
    }
    for (int i = 1; i <= N; i++) {
        if (loop[i] == loopMin) {
            cout << i << ' ';
        }
    }
    cout << '\n';
    return 0;
}