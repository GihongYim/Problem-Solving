#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str;
    string tmp;
    set<string> s;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            tmp = str.substr(i, j - i + 1);
            s.insert(tmp);
        }
    }
    cout << s.size() << '\n';
    return 0;
}