#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

bool getDist(int n, pair<int, int> start);

const int LEN = 20;
const int MAX = 100000;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int w, h;
string map[LEN];
pair<int, int> cleaner;
int dist[LEN][LEN];
vector<pair<int, int> > dirt;
int cleanerDist[10];
int edge[10][10];
int numOfDirt = 0;
int minDist = MAX;

void getDirt() {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (map[i][j] == '*') {
                dirt.push_back(make_pair(i, j));
            }
            if (map[i][j] == 'o') {
                cleaner.first = i;
                cleaner.second = j;
            }
        }
    }
}

bool calculateEdge() {
    for (int i = 0; i < dirt.size(); i++) {
        if (!getDist(i, dirt[i]))
            return false;
    }
    if (!getDist(-1, cleaner)) {
        return false;
    }
    return true;
}

bool getDist(int n, pair<int, int> start) {
    for (int i = 0; i < h; i++) {
        fill(dist[i], dist[i] + w, MAX);
    }
    queue<pair<int, int>> q;

    int x = start.first;
    int y = start.second;

    dist[x][y] = 0;
    q.push(make_pair(x, y));
    while (!q.empty()) {
        int nx, ny;
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int d = 0; d < 4; d++) {
            nx = x + dx[d];
            ny = y + dy[d];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (map[nx][ny] == 'x') continue;
            if (dist[x][y] + 1 >= dist[nx][ny]) continue;
            dist[nx][ny] = dist[x][y] + 1;
            q.push(make_pair(nx, ny));
        }
    }
    for (int i = 0; i < dirt.size(); i++) {
        if (dist[dirt[i].first][dirt[i].second] == MAX)
            return false;
    }   
    if (n >= 0) {
        for (int i = 0; i < dirt.size(); i++) {
            edge[n][i] = dist[dirt[i].first][dirt[i].second];
        }
    } else {
        for (int i = 0; i < dirt.size(); i++) {
            cleanerDist[i] = dist[dirt[i].first][dirt[i].second];
        }
    }
    return true;
}

int calculatePath(vector<int>& index) {
    int length = cleanerDist[index[0]];
    for (int i = 0; i < index.size() - 1; i++) {
        length += edge[index[i]][index[i + 1]];
    }
    return length;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while (1) {
        cin >> w >> h;
        if (w == 0 && h == 0)
            break;
        for (int i = 0; i < h; i++) {
            cin >> map[i];
        }
        dirt.clear();
        getDirt();
        if (!calculateEdge()) {
            cout << "-1\n";
            continue;
        }
        vector<int> index(dirt.size());
        for (int i = 0; i < dirt.size(); i++) {
            index[i] = i;
        }
        int totalDist;
        minDist = MAX;
        do {
            totalDist = calculatePath(index);
            minDist = min(minDist, totalDist);
        } while (next_permutation(index.begin(), index.end()));
        cout << minDist << '\n';
    }
    return 0;
}