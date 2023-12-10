#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, n;
    int total;
    int candi[11];
    int maxIdx;
    int maxCandi;
    int dup;
    cin >> t;
    for (int test_case = 1; test_case <= t; test_case++) {
        cin >> n;
        total = 0;
        maxCandi = -1;
        maxIdx = -1;
        dup = 1;
        for (int i = 1; i <= n; i++) {
            cin >> candi[i];
            total += candi[i];
            if (candi[i] > maxCandi) {
                maxCandi = candi[i];
                maxIdx = i;
                dup = 1;
            } else if (candi[i] == maxCandi) {
                dup++;
            }
        }
        if (dup > 1) {
            cout << "no winner\n";
        } else {
            if (maxCandi * 2 > total) {
                cout << "majority winner " << maxIdx << '\n';
            } else {
                cout << "minority winner " << maxIdx << '\n';
            }
        }
    }
    return 0;
}