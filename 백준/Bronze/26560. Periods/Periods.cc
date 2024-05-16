#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    string line = "";

    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        while (line == "")
            getline(cin, line);
        if (line.back() != '.')
            line += '.';
        cout << line << '\n';
    }

    return 0;
}