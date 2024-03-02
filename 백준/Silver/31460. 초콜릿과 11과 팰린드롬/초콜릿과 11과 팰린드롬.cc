#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    int N;

    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> N;
        if (N == 1) cout << 0 << '\n';
        else if (N % 2 == 0) {
            for (int i = 0; i < N; i++) {
                cout << '2';
            }
            cout << '\n';
        } else {
            cout << '1';
            for (int i = 0; i < N - 2; i++) {
                cout << '2';
            }
            cout << '1' << '\n';
        }
    }

    return 0;
}
