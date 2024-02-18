#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
long long a[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n;
    long long d = 1;
    int floor = 1;

    cin >> n;
    a[0] = 0;
    a[1] = 1;

    while (1) {
        d += 4 * floor;
        a[floor + 1] = a[floor] + d;
        if (a[floor + 1] > n)
            break;
        floor++;
    }
    cout << floor << '\n';
    return 0;
}