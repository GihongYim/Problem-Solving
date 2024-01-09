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
    vector<int> prior;
    prior.push_back(0);
    int next;
    bool changed;
    int startIndex = 0;
    cin >> n;
    changed = true;
    while (changed) {
        changed = false;
        int pSize = prior.size();
        for (int i = startIndex; i < pSize; i++) {
            next = prior[i] * 10 + 4;
            if (next <= n) {
                prior.push_back(next);
                changed = true;
            }
            next += 3;
            if (next <= n) {
                prior.push_back(next);
                changed = true;
            }
        }
        startIndex = pSize;
    }
    cout << prior[prior.size() - 1] << '\n';
    return 0;
}