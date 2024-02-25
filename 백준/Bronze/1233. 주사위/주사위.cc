#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int s1, s2, s3;
    int dice_sum;
    int dice_max = -1;
    int dice_index;
    map<int, int> m;

    cin >> s1 >> s2 >> s3;

    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                dice_sum = i + j + k;
                if (m.find(dice_sum) == m.end()) {
                    m.insert(make_pair(dice_sum, 0));
                }
                m[dice_sum] += 1;
            }
        }
    }

    for (auto u : m) {
        if (u.second > dice_max) {
            dice_index = u.first;
            dice_max = u.second;
        } else if (dice_max == u.second && u.first < dice_index) {
            dice_index = u.first;
            dice_max = u.second;
        }
    }
    cout << dice_index << '\n';
    return 0;
}