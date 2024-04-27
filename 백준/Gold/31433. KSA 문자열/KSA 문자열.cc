#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string x;
    string ksa = "KSA";
    int curr = 0;
    int startPos = 0;
    int cnt[3] = {0, 0, 0};
    int removeCnt = 0;
    cin >> x;
    for (int p = 0; p < 3; p++) {
        curr = 0;
        for (int i = 0; i < x.length(); i++) {
            if (x[i] == ksa[curr]) {
                curr++;
                curr %= 3;
                cnt[p]++;
            }
        }
    }
    // for (int i = 0; i < 3; i++)
    //     cout << cnt[i] << '\n';
    int maxP = 0;
    int maxCnt = 0;
    for (int i = 0; i < 3; i++) {
        if (cnt[i] > maxCnt) {
            maxP = i;
            maxCnt = cnt[i];
        }
    }
    curr = maxP;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] != ksa[curr]) {
            x[i] = 'X';
            removeCnt++;
        } else {
            curr++;
            curr %= 3;
        }
    }
    cout << removeCnt * 2 << '\n';

    return 0;
}
