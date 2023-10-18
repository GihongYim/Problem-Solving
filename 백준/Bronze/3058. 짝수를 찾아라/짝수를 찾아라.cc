#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, num;
    int minNum = 105;
    int sum = 0;
    cin >> T;
    for (int t = 0; t < T; t++) {
        sum = 0;
        minNum = 105;
        for (int i = 0; i < 7; i++){
            cin >> num;
            if (num % 2 == 0) {
                sum += num;
                minNum = min(minNum, num);
            }
        }
        cout << sum << ' ' << minNum << '\n';
    }
    return 0;
}