#include <iostream>
#include <vector>
using namespace std;

#define pii pair<int, int>
const int MAX = 52;

int N, M;
int basket[MAX][MAX];
int a[MAX][MAX];
int dx[9] = {0, 0, -1, -1, -1, 0, 1, 1, 1};
int dy[9] = {0, -1, -1, 0, 1, 1, 1, 0, -1};


void moveCloud(vector<pii >& cloud, int d, int s) {
    int x, y;
    int nx, ny;
    for (int index = 0; index < cloud.size(); index++) {
        x = cloud[index].first;
        y = cloud[index].second;

        nx = x + s * dx[d];
        ny = y + s * dy[d];

        nx = ((nx - 1) % N);
        if (nx < 0) nx += N;
        nx++;

        ny = ((ny - 1) % N);
        if (ny < 0) ny += N;
        ny++;

        cloud[index].first = nx;
        cloud[index].second = ny;
    }
}

void rain(vector<pii >& cloud) {
    for (int index = 0; index < cloud.size(); index++) {
        a[cloud[index].first][cloud[index].second] += 1;
    }
}

void waterCopy(vector<pii >& cloud) {
    int water;
    int x, y;
    int nx, ny;
    vector<pair<pair<int, int>, int> > rainfall;
    for (int index = 0; index < cloud.size(); index++) {
        water = 0;
        x = cloud[index].first;
        y = cloud[index].second;
        for (int d = 2; d < 9; d += 2) {
            nx = x + dx[d];
            ny = y + dy[d];
            if (nx <= 0 || nx > N || ny <= 0 || ny > N) continue;
            if (a[nx][ny])
                water++;
        }
        rainfall.push_back(make_pair(make_pair(x, y), water));
    }
    for (int i = 0; i < rainfall.size(); i++) {
        x = rainfall[i].first.first;
        y = rainfall[i].first.second;
        water = rainfall[i].second;
        a[x][y] += water;
    }
}

vector<pii> makeCloud(vector<pii> cloud) {
    vector<pii> newCloud;
    bool impossible[MAX][MAX];
    for (int i = 0; i <= N + 1; i++) {
        fill(impossible[i], impossible[i] + N + 2, false);    
    }
    for (int i = 0; i < cloud.size(); i++) {
        impossible[cloud[i].first][cloud[i].second] = true;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (impossible[i][j]) continue;
            if (a[i][j] < 2) continue;
            newCloud.push_back(make_pair(i, j));
            a[i][j] -= 2;
        }
    }
    cloud.clear();
    return newCloud;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int total = 0;
    cin >> N >> M;
    for (int i = 0; i <= N + 1; i++) {
        fill(a[i], a[i] + N + 2, 0);
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> a[i][j];
        }
    }
    int d, s;
    vector<pii > cloud;
    cloud.push_back(make_pair(N, 1));
    cloud.push_back(make_pair(N, 2));
    cloud.push_back(make_pair(N - 1, 1));
    cloud.push_back(make_pair(N - 1, 2));

    for (int round = 1; round <= M; round++) {
        cin >> d >> s;
        moveCloud(cloud, d, s);
        rain(cloud);
        waterCopy(cloud);
        cloud = makeCloud(cloud);
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N ; j++) {
            total += a[i][j];
        }
    }
    cout << total << '\n';
    return 0;
}