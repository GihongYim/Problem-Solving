#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector<int> num(3);

    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }
    sort(num.begin(), num.end());
    cout << num[1] << '\n';

    return 0;
}