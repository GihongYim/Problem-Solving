#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    string line;

    cin >> n;
    getline(cin, line);
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        int s, e;
        bool valid = true;
        s = 0;
        e = line.length() - 1;
        while (s < e) {
            if ( tolower(line[s]) != tolower(line[e])) {
                valid = false;
                break;
            }
            s++;
            e--;
        }
        if (valid) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}