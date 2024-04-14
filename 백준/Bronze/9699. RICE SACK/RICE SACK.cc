#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        vector<int> v(5);
        for (int j = 0; j < 5; j++) {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        cout << "Case #" << i << ": " << v[4] << '\n';
    }

    return 0;
}