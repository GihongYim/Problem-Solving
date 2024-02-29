#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const int ROOT = 1;
const int MX = 10000 * 10 + 1;
int unused = 2;
int nxt[MX][10];
int chk[MX];

int c2i(char c) {
    return c - '0';
}

void insert(string &s) {
    int curr = ROOT;
    int ch;
    for (auto c : s) {
        ch = c2i(c);
        if (nxt[curr][ch] == -1) { 
            nxt[curr][ch] = unused++;
        }
        curr = nxt[curr][ch];
    }
    chk[curr] = true;
}

bool search(string &s) {
    int curr = ROOT;
    int ch;
    for (auto c : s) {
        ch = c2i(c);
        curr = nxt[curr][ch];
    }
    for (int i = 0; i < 10; i++) {
        if (nxt[curr][i] != -1)
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    int n;
    string str[10001];
    bool similar;
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> n;
        for (int i = 0; i < MX; i++) {
            fill(nxt[i], nxt[i] + 10, -1);
        }
        fill(chk, chk + MX, false);
        unused = 2;
        for (int i = 0; i < n; i++) {
            cin >> str[i];
            insert(str[i]);
        }
        similar = false;
        for (int i = 0; i < n; i++) {
            if (search(str[i])) {
                similar = true;
                break;
            }
        }
        if (similar) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}