#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int N;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    

    cin >> N;

    vector<ll> p;
    vector<ll> m;
    vector<ll> result;
    for (int i = 0; i < N; i++) {
        int num;

        cin >> num;
        if (num > 0) {
            p.push_back(num);
        } else {
            m.push_back(num);
        }
    }
    sort(p.rbegin(), p.rend());
    sort(m.begin(), m.end());
    for (int i = 0; i < p.size(); i++) {
        if (p[i] == 1) {
            result.push_back(p[i]);
        } else {
            if (i != p.size() - 1 && p[i + 1] != 1) {
                result.push_back(p[i] * p[i + 1]);
                i++;
            } else {
                result.push_back(p[i]);
            }
        }
    }
    for (int i = 0; i < m.size(); i += 2) {
        if (i == m.size() - 1) {
            result.push_back(m[i]);
        } else {
            result.push_back(m[i] * m[i + 1]);
        }
    }
    ll maxSum = 0;
    for (int i = 0; i < result.size(); i++) {
        maxSum += result[i];
    }    
    cout << maxSum;
    return 0;
}