#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int i;

    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << i << ' ';
        if (i % 6 == 0)
            cout << "Go! ";
    }
    if (i % 6 != 1)
        cout << "Go! ";
    return 0;
}