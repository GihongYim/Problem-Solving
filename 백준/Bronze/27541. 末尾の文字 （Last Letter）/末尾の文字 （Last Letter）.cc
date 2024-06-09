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

    int n;

    cin >> n >> s;

    if (s[n - 1] == 'G') {
        s = s.substr(0, s.length() - 1);
    } else {
        s.push_back('G');
    }
    cout << s << '\n';
    return 0;
}