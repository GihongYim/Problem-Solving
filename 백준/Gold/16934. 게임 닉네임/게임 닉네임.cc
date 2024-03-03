#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 100005 * 10;
const int ROOT = 1;
int unused = 2;
int nxt[MAX][26];
int check[MAX];

int N;

void insert(string &nick) {
    int curr = ROOT;
    int next;

    for (int i = 0; i < nick.length(); i++) {
        next = nick[i] - 'a';
        if (nxt[curr][next] == -1) {
            nxt[curr][next] = unused++;
        }
        curr = nxt[curr][next];
    }
    check[curr]++;
}

string getNick(string &nick) {
    int curr = ROOT;
    int next;

    for (int i = 0; i < nick.length(); i++) {
        next = nick[i] - 'a';
        if (nxt[curr][next] == -1) {
            return nick.substr(0, i + 1);
        }
        curr = nxt[curr][next];
    }
    if (check[curr] == 0) {
        return nick;
    } else {
        return nick + to_string(check[curr] + 1);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string nick;

    for (int i = 0; i < MAX; i++) {
        fill(nxt[i], nxt[i] + 26, -1);
    }
    fill(check, check + MAX, 0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> nick;
        cout << getNick(nick) << '\n';
        insert(nick);
    }
    return 0;
}
