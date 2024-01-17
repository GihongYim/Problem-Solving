#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    int ability[4];
    int coeff[4] = {1, 5, 2, 2};
    int tmp;
    int total;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        fill(ability, ability + 4, 0);
        for (int i = 0; i < 4; i++) {
            cin >> ability[i];
        }
        for (int i = 0; i < 4; i++) {
            cin >> tmp;
            ability[i] += tmp;
        }
        ability[0] = max(ability[0], 1);
        ability[1] = max(ability[1], 1);
        ability[2] = max(ability[2], 0);
        total = 0;
        for (int i = 0; i < 4; i++) {
            total += (ability[i] * coeff[i]);
        }
        cout << total << '\n';
    }

    return 0;
}

//50 50 50 50 -> 50 250 100 100