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
    int b = 0; int w = 0;

    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'B') {
            b++;
        } else {
            w++;
        }
    }
    cout << b / 2 + w / 2 << '\n';
    return 0;
}