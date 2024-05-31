#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    int zeros = 0;
    int serial = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            zeros += serial;
            serial = 0;
        } else {
            serial++;
        }
    }
    cout << zeros << '\n';

    return 0;
}