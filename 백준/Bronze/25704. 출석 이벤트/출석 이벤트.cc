#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N;
    int price;

    cin >> N;
    cin >> price;
    int result = price;

    if (N >= 5) {
        result = min(result, price - 500);
    }

    if (N >= 10) {
        result = min(result, price - price / 10);
    }

    if (N >= 15) {
        result = min(result, price - 2000);
    }

    if (N >= 20) {
        result = min(result, price - price / 4);
    }

    result = max(0, result);
    cout << result << '\n';

    return 0;
}