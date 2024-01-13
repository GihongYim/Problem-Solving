#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int d, k;
    int a, b;
    int day[1000][2];
    day[1][0] = 1;
    day[1][1] = 0;
    day[2][0] = 0;
    day[2][1] = 1;
    day[3][0] = 1;
    day[3][1] = 1;
    
    cin >> d >> k;

    for (int i = 4; i <= d; i++) {
        day[i][0] = day[i - 1][0] + day[i - 2][0];
        day[i][1] = day[i - 1][1] + day[i - 2][1];
    }
    // day[D][0] * A + day[D][1] * B = K

    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= i; j++) {
            if (day[d][0] * j + day[d][1] * i == k) {
                a = i;
                b = j;
                cout << b << '\n';
                cout << a << '\n';
                return 0;
            }
        }
    }
    return 0;
}