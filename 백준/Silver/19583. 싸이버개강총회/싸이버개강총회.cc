#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    pair<int, int> S, E, Q;
    string tmp;
    string timestamp;
    string name;
    int hour, second;
    map<string, pair<bool, bool> > m;

    cin >> tmp;
    S.first = stoi(tmp.substr(0, 2));
    S.second = stoi(tmp.substr(3, 2));
    cin >> tmp;
    E.first = stoi(tmp.substr(0, 2));
    E.second = stoi(tmp.substr(3, 2));
    cin >> tmp;
    Q.first = stoi(tmp.substr(0, 2));
    Q.second = stoi(tmp.substr(3, 2));

    while (cin >> timestamp >> name) {
        if (m.find(name) == m.end()) {
            m.insert(make_pair(name, make_pair(false, false)));
        }
        hour = stoi(timestamp.substr(0, 2));
        second = stoi(timestamp.substr(3, 2));
        pair<int, int> curr_time = make_pair(hour, second);
        if (curr_time <= S) {
            m[name].first = true;
        }
        if (curr_time >= E && curr_time <= Q) {
            m[name].second = true;
        }       
    }
    int cnt = 0;
    for (auto student : m) {
        if (student.second.first && student.second.second)
            cnt++;
    }
    cout << cnt << '\n';
    
    return 0;
}