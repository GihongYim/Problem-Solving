#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int z;
    int w, k;

    cin >> z;
    for (int t = 0; t < z; t++) {
        cin >> w >> k;
        cout << (w * k) / 2 << '\n';
    }
    return 0;
}