#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string cmd;

    cin >> cmd;
    int cup[3] = {1, 0, 0};
    int tmp;
    for (int i = 0; i < cmd.length(); i++) {
        if (cmd[i] == 'A') {
            tmp = cup[0];
            cup[0] = cup[1];
            cup[1] = tmp;
        } else if (cmd[i] == 'B') {
            tmp = cup[1];
            cup[1] = cup[2];
            cup[2] = tmp;
        } else if (cmd[i] == 'C') {
            tmp = cup[0];
            cup[0] = cup[2];
            cup[2] = tmp;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (cup[i] == 1) {
            cout << i + 1 << '\n';
            break;
        }
    }
    return 0;
}