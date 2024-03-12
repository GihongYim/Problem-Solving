#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string student;
    int order = 0;
    map<string, int> m;
    vector<string> id;
    int K, L;

    cin >> K >> L;
    for (int i = 0; i < L; i++) {
        cin >> student;
        if (m.find(student) == m.end()) {
            m.insert(make_pair(student, 0));
        }
        m[student]++;
        id.push_back(student);
    }
    for (int i = 0; i < id.size(); i++) {
        m[id[i]]--;
        if (m[id[i]] == 0) {
            cout << id[i] << '\n';
            K--;
        }
        if (K == 0)
            break;
    }
    return 0;
}