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
    int price;
    int acm;

    cin >> n;
    cin >> price;
    for (int i = 0; i < n - 1; i++) {
        cin >> acm;
        price += acm;
    }
    cout << price << '\n';
    return 0;
}