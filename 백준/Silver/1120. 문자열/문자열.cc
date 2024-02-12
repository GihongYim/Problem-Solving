#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int diff(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < b.length(); i++) {
        if (a[i] != b[i])
            cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a, b;
    string subB;

    cin >> a >> b;

    int min_diff = b.length() + 1;
    int len = b.length() - a.length() + 1;

    // cout << len << '\n';
    for (int i = 0; i < len; i++) {
        subB = b.substr(i, a.length());
        min_diff = min(min_diff, diff(a, subB));
    }
    cout << min_diff << '\n';
    return 0;
}