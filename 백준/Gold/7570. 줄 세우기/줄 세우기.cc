#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N;

    cin >> N;
    int longest = 0;
    int cnt = 0;
    vector<int> v(N + 1, - 1);

    for (int i = 1; i <= N; i++) {
        int tmp;
        cin >> tmp;
        v[tmp] = i;
    }

    for (int i = 1; i < N; i++) {
        if (v[i] < v[i + 1])
            cnt += 1;
        else {
            longest = max(longest, cnt);
            cnt = 1;
        }
    }

    if (N != 1) {
        cout << (N - longest) << '\n';
    } else {
        cout << 0 << '\n';
    }

 
    return 0;
}
