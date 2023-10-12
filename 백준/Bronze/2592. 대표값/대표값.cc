#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int total = 0;
    int count = 0;
    int maxCount = 0;
    map<int, int>::iterator it;
    map<int, int> m;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        total += n;
        if (m.find(n) == m.end()) {
            m.insert(make_pair(n, 0));
        }
        m[n]++;
    }

    for (it = m.begin(); it != m.end(); it++) {
        if (maxCount < it->second) {
            maxCount = it->second;
            count = it->first;
        }
    }
    cout << total / 10 << '\n';
    cout << count << '\n';
    return 0;
}