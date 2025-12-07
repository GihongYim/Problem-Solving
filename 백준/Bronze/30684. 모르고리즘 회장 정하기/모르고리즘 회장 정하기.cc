#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
 
    vector<string> name;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;

        if (temp.length() == 3)
            name.push_back(temp);
    }

    sort(name.begin(), name.end());

    cout << name[0] << '\n';

    return 0;
}