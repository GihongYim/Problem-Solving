#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

const int ROOT = 1;
const int MX = 80 * 500 + 1;
map<string, int> nxt[MX];
int unused = 2;
bool chk[MX];

vector<string> split(string& path) {
    vector<string> s;
    int pos = 0;
    int next;
    string dir;

    while(1) {
        next = path.find('\\', pos);
        if (next == string::npos) {
            dir = path.substr(pos);
        } else {
            dir = path.substr(pos, next - pos);
        }
        s.push_back(dir);
        if (next == string::npos)
            break;
        pos = next + 1;
    }
    return s;
}

void insert(string &s) {
    int curr = ROOT;
    vector<string> splitted;

    splitted = split(s);
    
    for (auto dir: splitted) {
        if (nxt[curr].find(dir) == nxt[curr].end()) {
            nxt[curr].insert(make_pair(dir, unused++));
        }
        curr = nxt[curr][dir];
    }
    chk[curr] = true;
}

void printSpace(int n) {
    for (int i = 0; i < n; i++) {
        cout << ' ';
    }
}

void printTree(int curr, int depth) {

    for (auto s: nxt[curr]) {
        printSpace(depth);
        cout << s.first << '\n';
        printTree(s.second, depth + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    string path;
    fill(chk, chk + MX, false);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> path;
        insert(path);
    }
    printTree(1, 0);

    return 0;
}