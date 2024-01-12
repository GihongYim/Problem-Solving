#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    int cnt;
    bool num[10];
    int tmp;
    while (cin >> n >> m) {
        cnt = 0;
        for (int i = n; i <= m; i++) {
            fill(num, num + 10, false);
            tmp = i;
            cnt++;
            while (tmp > 0) {
                if (num[tmp % 10]) {
                    cnt--;
                    break;
                }
                num[tmp % 10] = true;
                tmp /= 10;
            }
        }
        cout << cnt << '\n';
    }

    

    return 0;
}