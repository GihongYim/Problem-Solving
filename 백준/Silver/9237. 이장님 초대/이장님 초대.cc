#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    
    cin >> n;

    vector<int> tree(n);
    
    for (int i = 0; i < n; i++) {
        cin >> tree[i];
    }

    sort(tree.begin(), tree.end(), greater<int>());
    int maxValue = -1;
    for (int i = 0; i < n; i++) {
        tree[i] += i + 2;
        maxValue = max(maxValue, tree[i]);

    }
    cout << maxValue << '\n';

    return 0;
}
