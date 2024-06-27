#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b;
    int k, x;
    int person = 0;

    cin >> a >> b;
    cin >> k >> x;

    person = min(k + x, b) - max(k - x, a) + 1;
    if (person <= 0) {
        cout << "IMPOSSIBLE\n";
    } else {
        cout << person << '\n';
    }
    return 0;
}