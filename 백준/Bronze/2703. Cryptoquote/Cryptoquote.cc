#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    
    string str;
    string a;
    int pos;
    cin >> n;

    getline(cin, str);
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        getline(cin, a);
        string ret;
        for (int j = 0; j < str.length(); j++) {
            if (str[j] >= 'A' && str[j] <= 'Z') {
                ret += a[str[j] - 'A'];
            } else {
                ret += str[j];
            }
        }
        cout << ret << '\n';
    }
    return 0;
}