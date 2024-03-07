#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
using namespace std;
int N;
int M;
map<string, int> indeg;
map<string, vector<string> > childs;
map<string, vector<string> > nxt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string name;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> name;
        indeg.insert(make_pair(name, 0));
        nxt.insert(make_pair(name, vector<string>()));
    }
    cin >> M;
    string parent;
    string child;
    for (int i = 0; i < M; i++) {
        cin >> child >> parent;
        indeg[child]++;
        nxt[parent].push_back(child);
    }
    for (auto c : nxt) {
        sort(nxt[c.first].begin(), nxt[c.first].end());
    }
    vector<string> root;
    for (auto u : indeg) {
        if (u.second == 0) {
            root.push_back(u.first);
        }
    }
    
    queue<string> q;
    for (int i = 0; i < root.size(); i++) {
        q.push(root[i]);
    }
    while (!q.empty()) {
        string name = q.front(); q.pop();
        childs.insert(make_pair(name, vector<string>()));
        for (auto c : nxt[name]) {
            if (indeg[c] == 0) continue;
            indeg[c]--;
            if (indeg[c] == 0) {
                q.push(c);
                childs[name].push_back(c);
            }
        }
    }
    sort(root.begin(), root.end());
    cout << root.size() << '\n';
    for (int i = 0; i < root.size(); i++)
        cout << root[i] << ' ';
    cout << '\n';
    for (auto p: indeg) {
        cout << p.first << ' ' << childs[p.first].size() << ' ';
        for (int i = 0; i < childs[p.first].size(); i++) {
            cout << childs[p.first][i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}