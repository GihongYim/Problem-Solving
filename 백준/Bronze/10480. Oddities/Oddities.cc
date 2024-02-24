#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2) {
            cout << x << " is odd\n";
        } else {
            cout << x << " is even\n";
        }
    }
    return 0;
}