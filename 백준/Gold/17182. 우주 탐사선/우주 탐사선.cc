#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

const int MAX = 10;
const int INF = 0x3f3f3f3f;
int d[MAX][MAX];
int nxt[MAX][MAX];
int N, K;
int result;
bool visited[MAX];
int arr[MAX];

void dfs(int start) {
    if (start == N) {
        if (arr[0] != K) {
            return;
        }
        int sum = 0;
        for (int i = 0; i < N - 1; i++) {
            sum += d[arr[i]][arr[i + 1]];
        }
        result = min(result, sum);
    }

    for (int i = 0; i < N; i++) {
        if (visited[i] == false) {
            visited[i] = true;
            arr[start] = i;
            dfs(start + 1);
            visited[i] = false;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K;
    for (int i = 0; i < N; i++)
        fill(d[i], d[i] + N, INF);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> d[i][j];
            nxt[i][j] = j;
        }
    }
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    result = 0x3f3f3f3f;
    dfs(0);
    cout << result << '\n';
    return 0;
}