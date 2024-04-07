#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N;
    string s;

    cin >> N;
    cin >> s;

    for (int i = s.size() - 5; i < s.size(); i++) {
        cout << s[i];
    }
    cout << '\n';

    return 0;
}