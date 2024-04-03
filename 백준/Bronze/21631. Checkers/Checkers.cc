#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    long long w, b;

    cin >> w >> b;
    if (w >= b) {
        cout << b << '\n';
    } else {
        cout << w + 1 << '\n';
    }
    return 0;
}