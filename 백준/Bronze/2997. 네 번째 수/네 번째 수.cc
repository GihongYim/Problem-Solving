#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num + 3);
    int d1, d2;
    d1 = num[1] - num[0];
    d2 = num[2] - num[1];
    if (d1 == d2) {
        cout << num[2] + d2 << '\n';
    } else if (d1 < d2) {
        cout << num[1] + d1 << '\n';
    } else {
        cout << num[0] + d2 << '\n';
    }
    return 0;
}