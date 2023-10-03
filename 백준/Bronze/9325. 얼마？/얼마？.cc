#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test_case, s, n;
    int option, price;
    int total = 0;

    cin >> test_case;
    for (int t = 0; t < test_case; t++) {
        cin >> s >> n;
        total = s;
        for (int i = 0; i < n; i++) {
            cin >> option >> price;
            total += (option * price);
        }
        cout << total << '\n';
    }
    return 0;
}