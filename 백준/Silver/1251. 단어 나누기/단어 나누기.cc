#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string divide(string str, int p, int q) {
    string a, b, c;

    a = str.substr(0, p);
    b = str.substr(p, q - p);
    c = str.substr(q);
    // cout << a << ' ' << ' ' << b << ' ' << c << '\n';
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());
    return a + b + c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str;
    vector<string> s;
    
    cin >> str;

    for (int i = 1; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            s.push_back(divide(str, i, j));
        }
    }
    sort(s.begin(), s.end());
    // for (int i = 0; i < s.size(); i++) {
    //     cout << s[i] << '\n';
    // }
    cout << s[0] << '\n';
    return 0;
}