#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, m, M, T, R;
    cin >> N >> m >> M >> T >> R;

    if (m + T > M) {
        cout << -1 << '\n';
        return 0;
    }
    
    int curr = m;
    int ex = 0;
    int time = 0;
    while (ex < N) {
        if (curr + T <= M) {
            ex++;
            curr += T;
        } else {
            curr -= R;
            if (curr < m)
                curr = m;
        }
        time++;
    }
    cout << time << '\n';
    return 0;
}