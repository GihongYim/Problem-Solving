#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

typedef struct s_person {
    string name;
    int score;
    bool isHidden;
} t_person;

int pCmp(t_person a, t_person b) {
    if (a.score != b.score) {
        return a.score > b.score;
    } else {
        return a.name < b.name;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N;
    string line;

    cin >> N;
    vector<t_person> v(N);
    for (int i = 0; i < N; i++) {
        size_t pos;
        size_t endPos;
    
        cin >> line;
        pos = line.find("\"name\":", 0);
        endPos = line.find('\"', pos + 8);
        v[i].name = line.substr(pos + 8, endPos - pos - 8);
    
        pos = line.find("\"score\":", 0);
        endPos = line.find(',', pos + 8);
        v[i].score = stoi(line.substr(pos + 8, endPos - pos - 8));

        pos = line.find("\"isHidden\":", 0);
        endPos = line.find('}', pos + 11);
        v[i].isHidden = stoi(line.substr(pos + 11, endPos - pos - 11));
    }
    sort(v.begin(), v.end(), pCmp);
    int rank = 1;
    int displayRank = 1;
    vector<int> sameRank;
    for (int i = 0; i < N; i++) {
        if (i != 0 && v[i - 1].score != v[i].score) {
            for (int j = 0; j < sameRank.size(); j++) {
                if (v[sameRank[j]].isHidden) continue;
                cout << displayRank << ' ' << v[sameRank[j]].name << ' ' << v[sameRank[j]].score << '\n';
            }
            sameRank.clear();
            displayRank = rank;
        }
        sameRank.push_back(i);
        rank++;
    }
    for (int i = 0; i < sameRank.size(); i++) {
        if (v[sameRank[i]].isHidden) continue;
        cout << displayRank << ' ' << v[sameRank[i]].name << ' ' << v[sameRank[i]].score << '\n';
    }
    return 0;
}