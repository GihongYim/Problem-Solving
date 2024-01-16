#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    int m;
    string cmd;
    string word;
    int num;
    string alpha = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> t;
    for (int test_case = 1; test_case <= t; test_case++) {
        cin >> m >> cmd;
        if (cmd == "C") {
            for (int i = 0; i < m; i++) {
                cin >> word;
                cout << to_string(word[0] - 'A' + 1) << ' ';
            }
            cout << '\n';
        } else {
            for (int i = 0; i < m; i++) {
                cin >> num;
                cout << alpha[num] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}