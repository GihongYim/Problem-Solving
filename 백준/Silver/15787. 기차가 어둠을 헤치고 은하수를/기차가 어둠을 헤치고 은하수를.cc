#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
const int MAX = 100005;
unsigned int MASK = (1 << 20) - 1;
int N, M;
unsigned int train[MAX];
set<unsigned int> pass;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int cmd, num, seat;

    cin >> N >> M;
    fill(train, train + N + 1, 0);
    for (int n = 0; n < M; n++) {
        cin >> cmd >> num;
        if (cmd == 1) {
            cin >> seat;
            seat -= 1;
            train[num] |= (1U << seat);
        } else if (cmd == 2) {
            cin >> seat;
            seat -= 1;  
            train[num] &= ~(1U << seat);
        } else if (cmd == 3) {
            train[num] = (train[num] << 1);
        } else if (cmd == 4) {
            train[num] = (train[num] >> 1);
        }
        train[num] &= MASK;
    }
    for (int i = 1; i <= N; i++) {
        pass.insert(train[i]);
        // cout << train[i] << '\n';
    }
    cout << pass.size() << '\n';

    return 0;
}