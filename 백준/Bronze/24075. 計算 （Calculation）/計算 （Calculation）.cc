#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b;

    cin >> a >> b;
    cout << max(a + b, a - b) << '\n' << min(a + b, a - b);

    return 0;
}