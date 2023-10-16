#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    vector<int> a(10);
    
    cin >> T;
    for (int t = 0; t < T; t++) {
        for (int i = 0; i < 10; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << a[7] << '\n';
    }
    return 0;
}