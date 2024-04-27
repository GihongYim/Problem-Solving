#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string my;
    string other;
    int n;
    int cnt = 0;

    cin >> my;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> other;
        if (my == other)
            cnt++;
    }
    cout << cnt << '\n';

    return 0;
}