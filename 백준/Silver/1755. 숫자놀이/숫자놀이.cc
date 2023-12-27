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
    string digit[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> m >> n;
    vector<pair<string, int> > v;
    string num;
    for (int i = m; i <= n; i++) {
        num = to_string(i);
        string str;
        for (int j = 0; j < num.length(); j++) {
            str += " ";
            str += digit[num[j] - '0'];
        }
        v.push_back(make_pair(str, stoi(num)));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].second;
        if (i % 10 == 9) cout << '\n';
        else cout << ' ';
    }

    return 0;
}