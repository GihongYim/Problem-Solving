#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;

    cin >> N;

    queue<pair<string, int>> q;
    string name;
    int id;
 
    for (int i = 0; i < N; i++) {
        cin >> name >> id;
        q.push(make_pair(name, id));
    }

    while (q.size() > 1) {
        pair<string, int> curr = q.front();
        q.pop();
        
        for (int i = 0; i < curr.second - 1; i++) {
            pair<string, int> temp = q.front();
            q.pop();
            q.push(temp);
        }
        pair<string, int> target = q.front();
        q.pop();
    }

    pair<string, int> lastStudent = q.front();
    q.pop();

    cout << lastStudent.first << '\n';
    
    return 0;
}