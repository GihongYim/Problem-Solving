#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int shake[2];
    int next[2];

    cin >> n;
    shake[0] = 1;
    shake[1] = 0;
    for (int i = 2; i <= n; i++) {
        next[0] = shake[0] + shake[1];
        next[1] = shake[0];
        shake[0] = next[0];
        shake[1] = next[1];
        shake[0] %= 10;
        shake[1] %= 10;
    }
    cout << (shake[0] + shake[1]) % 10 << '\n';
    return 0;
}