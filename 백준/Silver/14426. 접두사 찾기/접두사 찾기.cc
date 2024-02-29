#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const int ROOT = 1;
const int MX = 10000 * 500 + 1;
int unused = 2;
int nxt[MX][26];
int chk[MX];


int c2i(char c) {
    return c - 'a';
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
        if (nxt[curr][ch] == -1) {
            return false;
        }
        curr = nxt[curr][ch];
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    string str;
    int cnt = 0;

    for (int i = 0; i < MX; i++) {
        fill(nxt[i], nxt[i] + 26, -1);
    }
    fill(chk, chk + MX, false);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> str;
        insert(str);
    }
    for (int i = 0; i < M; i++) {
        cin >>str;
        if (search(str)) {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}