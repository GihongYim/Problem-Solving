#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    int pos;
    string word;
    string result;
    cin >> T;

    for (int t = 0; t < T; t++) {
        cin >> pos >> word;
        if (pos == word.length())
            cout << word.substr(0, pos - 1) << '\n';
        else
            cout << word.substr(0, pos - 1) + word.substr(pos) << '\n';
    }
    return 0;
}