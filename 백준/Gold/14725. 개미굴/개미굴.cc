#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

const int MX = 150001;
const int ROOT = 1;
int unused = 2;

map<string, int> nxt[MX];

void insert(vector<string> &v) {
    int curr = ROOT;

    for (auto room : v) {
        if (nxt[curr].find(room) == nxt[curr].end()) {
            nxt[curr].insert(make_pair(room, unused++));
        }
        curr = nxt[curr][room];
    }
}

void printBar(int n) {
    for (int i = 0; i < n; i++) {
        cout << "--";
    }
}

void printRoom(int n, int depth) {

    for (auto room : nxt[n]) {
        printBar(depth);
        cout << room.first << '\n';
        printRoom(room.second, depth + 1);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    int t;
    string room;
    cin >> N;
    for (int i = 0; i < N; i++) {
        vector<string> v;
        cin >> t;
        for (int j = 0; j < t; j++) {
            cin >> room;
            v.push_back(room);
        }
        insert(v);
    }
    printRoom(1, 0);

    return 0;
}