#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str;
    string target;
    size_t pos = 0;
    int cnt = 0;

    getline(cin, str);
    getline(cin, target);

    while (1) {
        pos = str.find(target, pos);
        if (pos == string::npos)
            break;
        pos += target.length();
        cnt++;
    }
    cout << cnt << '\n';

    return 0;
}