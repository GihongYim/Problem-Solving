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
    for (int test_case = 0; test_case < n; test_case++) {
        int i, f;

        cin >> i >> f;
        if (max(i, f) <= 2 && i + f <= 3) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}