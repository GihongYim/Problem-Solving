#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    string str;
    vector<string> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        v.push_back(str);
    }
    bool equal = true;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (equal) {
            for (int j = 0; j < str.length(); j++) {
                if (v[i][j / 2] != str[j]) {
                    equal = false;
                }
            }
        }
    }
    if (equal) {
        cout << "Eyfa\n";
    } else {
        cout << "Not Eyfa\n";
    }

    return 0;
}