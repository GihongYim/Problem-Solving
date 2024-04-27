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
    string n[3];
    int cnt[3] = {0, 0, 0};
    int curr = 0;
    cin >> x;
    for (int p = 0; p < 3; p++) {
        curr = p;
        for (int i = 0; i < x.length(); i++) {
            if (x[i] == ksa[curr]) {
                curr++;
                curr %= 3;
                n[p] += x[i];
            }
        }
    }
    for (int p = 0; p < 3; p++) {
        cnt[p] = (x.length() - n[p].length());
        if (n[p].length() == 0) {
            n[p] = "K";
            cnt[p]++;
        }
        if (n[p][0] == 'A') {
            n[p] = "S" + n[p];
            cnt[p]++;
            while (n[p].length() > x.length()) {
                n[p].pop_back();
                cnt[p]++;
            }
        }
        if (n[p][0] == 'S') {
            n[p] = "K" + n[p];
            cnt[p]++;
            while (n[p].length() > x.length()) {
                n[p].pop_back();
                cnt[p]++;
            }
        }
        cnt[p] += (x.length() - n[p].length());
    }
    cout << *min_element(cnt, cnt + 3) << '\n';
    return 0;
}

// K(2) -> KSA(2) : 4
// SAK(0) -> KSAK(1) -> KSA(1) : 2
// AK(1) -> SAK(2) -> SA(1) -> KAS(1) : 6