#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N;
    int num, total;

    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> N;
        total = 0;
        for (int i = 0; i < N; i++) {
            cin >> num;
            total += num;
        }
        cout << total << '\n';
    }
    return 0;
}