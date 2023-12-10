#include <iostream>
using namespace std;

int N, M;
int friends[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    int src, dst;
    fill(friends, friends + N + 1, 0);
    for (int i = 0; i < M; i++) {
        cin >> src >> dst;
        friends[src]++;
        friends[dst]++;
    }
    for (int i = 1; i <= N; i++) {
        cout << friends[i] << '\n';
    }
    return 0;
}