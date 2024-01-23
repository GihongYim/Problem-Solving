#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int cnt[1000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int divisor[5];
    for (int i = 0; i < 5; i++){
        cin >> divisor[i];
    }
    fill(cnt, cnt + 1000000, 0);
    for (int i = 0; i < 5; i++) {
        for (int j = divisor[i]; j <= 1000000; j+=divisor[i]) {
            cnt[j]++;
        }
    }
    for (int i = 0; i <= 1000000; i++) {
        if (cnt[i] >= 3) {
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}