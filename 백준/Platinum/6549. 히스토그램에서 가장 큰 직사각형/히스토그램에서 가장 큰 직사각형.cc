#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>
using namespace std;

int n;
long long hist[100005];
vector<long long> s;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        
    while (1) {
        cin >> n;
        if (n == 0)
            break;
        long long answer = 0;
        for (int i = 1; i <= n; i++) {
            cin >> hist[i];
        }
        s.push_back(0);
        for (int i = 1; i <= n + 1; i++) {
            while (!s.empty() && hist[s.back()] > hist[i]) {
                int tmp = s.back();
                s.pop_back();
                answer = max(answer, hist[tmp] * (i - s.back() - 1));
            }
            s.push_back(i);
        }
        cout << answer << '\n';
        memset(hist, 0, 100000);
        s.clear();
    }
    return 0;
}