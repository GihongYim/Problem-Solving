#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t1, m1, t2, m2;

    cin >> t1 >> m1 >> t2 >> m2;
    int result;

    result = (t2 - t1) * 60 + (m2 - m1);
    if (result < 0) {
        result += 1440;
    }
    cout << result << ' ' << result / 30 << '\n';
    return 0;
}