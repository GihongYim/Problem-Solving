#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, p, price, topPrice;
    string name, topName;
    cin >> n;
    for (int test = 1; test <= n; test++) {
        cin >> p;
        topPrice = 0;
        for (int i = 0; i < p; i++) {
            cin >> price >> name;
            if (price > topPrice) {
                topName = name;
                topPrice = price;
            }
        }
        cout << topName << '\n';
    }
    return 0;
}