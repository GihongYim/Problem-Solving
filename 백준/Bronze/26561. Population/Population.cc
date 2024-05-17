#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    long long p, t;
    long long add;
    cin >> n;
    for (int test_case = 1; test_case <= n; test_case++) {
        cin >> p >> t;
        cout << p + (t / 4 - t / 7) << '\n';

    }
    return 0;
}