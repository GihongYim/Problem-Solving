#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string h;
    string n;
    int pos = 0;
    int cnt = 0;
    cin >> h;
    cin >> n;
    while (1) {
        pos = h.find(n, pos);
        if (pos == string::npos) {
            break;
        }
        pos += n.length();
        cnt++;
    }
    cout << cnt << '\n';

    return 0;
}