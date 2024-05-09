#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T, plate;
    int arr[31];
    
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> plate;
        int white[2] = {0, 0};
        int black[2] = {0, 0};
        for (int i = 0; i < plate; i++) {
            cin >> arr[i];
            if (arr[i] == 0)
                white[i % 2]++;
            else
                black[i % 2]++;
        }
        if (plate % 2 == 1) {
            cout << "YES\n";
        } else if (abs(black[0] - black[1]) <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}