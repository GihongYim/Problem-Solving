#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    string str;
    vector<string> v;
    vector<string> w;
    int flag = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        v.push_back(str);
        w.push_back(str) ;
    }
    sort(w.begin(), w.end());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != w[i]) {
            flag = -1;
            break;
        }
    }
    if (flag == 1) {
        cout << "INCREASING\n";
        return 0;
    }
    flag = - 1;
    sort(w.begin(), w.end(), greater<string>());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != w[i]) {
            flag = 0;
            break;
        }
    }
    if (flag == -1) {
        cout << "DECREASING\n";
        return 0;
    } else {
        cout << "NEITHER\n";
        return 0;
    }
    return 0;
}