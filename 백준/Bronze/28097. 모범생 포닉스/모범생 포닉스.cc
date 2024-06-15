#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N;
    int T[130];
    int answer = 0;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> T[i];
        answer += T[i];
    }
    answer += ((N - 1) * 8);
    cout << answer / 24 << ' ' << answer % 24 << '\n';
    return 0;
}