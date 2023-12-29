#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;

    cin >> n >> k;
    bool number[1001];
    vector<int> erased;

    fill(number, number + n + 1, false);
    number[0] = true;
    number[1] = true;
    for (int i = 2; i <= n; i++) {
        if (number[i] == false) {
            for (int j = i; j <= n; j += i) {
                if (number[j] == false) {
                    number[j] = true;
                    erased.push_back(j);
                }
                if (erased.size() == k)
                    break;
            }
            if (erased.size() == k)
                break;
        }

    }
    cout << erased[erased.size() - 1] << '\n';

    return 0;
}