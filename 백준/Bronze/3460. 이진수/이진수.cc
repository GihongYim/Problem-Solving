#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    int n;

    cin >> T;
    int pos;
    for (int t = 0; t < T; t++) {
        cin >> n;
        pos = 0;
        while (n > 0) {
            if (n & 1)
                cout << pos << ' ';
            pos++;
            n = n >> 1;
        }
    }
    return 0;
}