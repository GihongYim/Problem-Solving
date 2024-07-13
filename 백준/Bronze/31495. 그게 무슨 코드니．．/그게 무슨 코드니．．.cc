#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string line;

    getline(cin, line);

    

    if (line.length() <= 2) {
        cout << "CE\n";
        return 0;
    }
    if (line[0] != '\"' || line[line.length() - 1] != '\"') {
        cout << "CE\n";
        return 0;
    }

    line = line.substr(1, line.length() - 2);

    if (line.find('\"') != string::npos) {
        cout << "CE\n";
        return 0;
    }

    cout << line << '\n';
    return 0;
}