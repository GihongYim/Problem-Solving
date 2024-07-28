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
    string K;

    cin >> N;
    cin >> K;

    int odd = 0;
    int even = 0;

    for (int i = 0; i < N; i++) {
        if ((K[i] - '0') % 2 == 0)
            even++;
        else
            odd++;
    }

    if (odd > even) {
        cout << "1\n";
    } else if (even > odd) {
        cout << "0\n";
    } else {
        cout << "-1\n";
    }

    return 0;
}