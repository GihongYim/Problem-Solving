#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string p;
    vector<char> s;
    int cnt = 0;

    cin >> p;
    for (int i = 0; i < p.size(); i++) {
        if (p[i] == '(') {
            s.push_back('(');
        } else if (p[i] == ')') {
            if (s.empty()) {
                cnt++;
            } else {
                s.pop_back();
            }
        }
    }
    cnt += s.size();
    cout << cnt << '\n';
    return 0;
}