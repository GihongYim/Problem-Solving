#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        string  act;
        size_t  pos;
        cin >> act;
        pos = act.find('D');
        if (pos == string::npos) {
            cout << act.length() << '\n';
        } else {
            cout << pos << '\n';
        }
    }
    return 0;
}