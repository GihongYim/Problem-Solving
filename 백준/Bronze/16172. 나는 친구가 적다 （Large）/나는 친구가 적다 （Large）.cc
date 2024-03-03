#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s, k;
    string ss = "";
    cin >> s;
    cin >> k;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]))
            ss += s[i];
    }
    if (strstr(ss.c_str(), k.c_str()) != NULL) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

    return 0;
}