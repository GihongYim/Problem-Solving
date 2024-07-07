#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N, Q;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> Q;

    vector<int> v(N);
    int pos = 0;
    int op, index, x;
    int shift;
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    for (int t = 1; t <= Q; t++) {
        cin >> op;

        if (op == 1) {
            cin >> index >> x;
            index--;
            v[(index + pos) % N] += x;
        } else if (op == 2) {
            cin >> shift;
            pos -= shift;
            pos = (pos + N) % N;
        } else if (op = 3) {
            cin >> shift;
            pos += shift;
            pos %= N;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << v[(pos + i) % N] << ' ';
    }
    cout << '\n';
    return 0;
}