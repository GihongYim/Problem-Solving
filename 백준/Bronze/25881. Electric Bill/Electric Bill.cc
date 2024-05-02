#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int basic, addition;
    int n;
    int kwh;
    int total;
    cin >> basic >> addition;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> kwh;
        total = basic * min(1000, kwh) + addition * max(0, kwh - 1000);
        cout << kwh << ' ' << total << '\n';
    }
    return 0;
}