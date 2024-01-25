#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int m, k;
    vector<int> a;
    int tmp;
    int total;

    cin >> n;
    cin >> m >> k;
    total = m * k;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < a.size(); i++) {
        total -= a[i];
        if (total <= 0) {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    cout << "STRESS\n";
    return 0;
}