#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m >= 300) {
            cout << "1 ";
        } else if (m >= 275) {
            cout << "2 ";
        } else if (m >= 250) {
            cout << "3 ";
        } else {
            cout << "4 ";
        }
    }
    cout << '\n';
    return 0;
}