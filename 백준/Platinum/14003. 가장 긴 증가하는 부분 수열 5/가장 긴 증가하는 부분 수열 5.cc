#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long


const int MAX = 1000005;
int N;
ll a[MAX];
int dp[MAX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;
    vector<ll> l;
    vector<ll>::iterator iter;
    int tmp = 0;
    int idx;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (l.size() == 0) {
            l.push_back(a[i]);
            dp[i] = 1;
        } else {
            if (l[l.size() - 1] < a[i]) {
                l.push_back(a[i]);
                dp[i] = l.size();
            } else {
                iter = lower_bound(l.begin(), l.end(), a[i]);
                *(iter) = a[i];
                dp[i] = iter - l.begin() + 1;
            }
        }
        if (dp[i] > tmp) {
            idx = i;
            tmp = dp[i];
        }
    }
    cout << l.size() << '\n';
    vector<ll> s;
    s.push_back(a[idx]);
    for (int i = idx - 1; i >= 0; i--) {
        if (a[i] < a[idx] && dp[i] + 1 == dp[idx]) {
            idx = i;
            s.push_back(a[i]);
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        cout << s[i] << ' ';
    }
    cout << '\n';
    return 0;
}