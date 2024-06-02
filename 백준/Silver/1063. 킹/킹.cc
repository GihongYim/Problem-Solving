#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string king, stone;
    pair<int, int> k, s;
    int n;
    map<string, pair<int, int> > m;
    m.insert(make_pair("R", make_pair(0, 1))); 
    m.insert(make_pair("L", make_pair(0, -1))); 
    m.insert(make_pair("B", make_pair(-1, 0))); 
    m.insert(make_pair("T", make_pair(1, 0))); 
    m.insert(make_pair("RT", make_pair(1, 1))); 
    m.insert(make_pair("LT", make_pair(1, -1))); 
    m.insert(make_pair("RB", make_pair(-1, 1))); 
    m.insert(make_pair("LB", make_pair(-1, -1))); 

    cin >> king >> stone >> n;
    k.first = king[1] - '0';
    k.second = king[0] - 'A' + 1;
    s.first = stone[1] - '0';
    s.second = stone[0] - 'A' + 1;
    int nx, ny;
    int nnx, nny;
    for (int i = 0; i < n; i++) {
        string move;
        cin >> move;
        nx = k.first + m[move].first;
        ny = k.second + m[move].second;
        if (nx < 1 || nx > 8 || ny < 1 || ny > 8) continue;
        if (nx == s.first && ny == s.second) {
            nnx = s.first + m[move].first;
            nny = s.second + m[move].second;
            if (nnx < 1 || nnx > 8 || nny < 1 || nny > 8) continue;
            s.first = nnx;
            s.second = nny;
        }
        k.first = nx;
        k.second = ny;
    }
    cout << (char)(k.second + 'A' - 1) << k.first << '\n';
    cout << (char)(s.second + 'A' - 1) << s.first;
    return 0;
}