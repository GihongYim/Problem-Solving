#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 200

int N, K;
int n;
vector<int> pot;
int ground[MAX][MAX];
int tmp[MAX][MAX];
int cnt = 0;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void addFish() {
    int minFish = 0x3f3f3f3f;
    for (int i = 0; i < pot.size(); i++) {
        minFish = min(minFish, pot[i]);
    }

    for (int i = 0; i < pot.size(); i++) {
        if (minFish == pot[i])
            pot[i]++;
    }
}

void rotate(int &h, int &w) {
    int ret[MAX][MAX];

    for (int i = 0; i < MAX; i++)
        fill(ret[i], ret[i] + MAX, 0);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            ret[j][h - 1 - i] = tmp[i][j];
        }
    }
    int temp;
    temp = h;
    h = w;
    w = temp;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            tmp[i][j] = ret[i][j];
        }
    }
}

void roll1() {
    int w = 1;
    int h = 1;
    int n = pot.size();
    for (int i = 0; i < MAX; i++) {
        fill(ground[i], ground[i] + MAX, 0);
        fill(tmp[i], tmp[i] + MAX, 0);
    }
    for (int i = 0; i < pot.size(); i++) {
        ground[0][i] = pot[i];
    }
    while (h <= n - w) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                tmp[i][j] = ground[i][j];
                ground[i][j] = 0;
            }
        }
        for (int i = 0; i < n - w; i++) {
            ground[0][i] = ground[0][i + w];
        }
        for (int i = n - w; i < n; i++) {
            ground[0][i] = 0;
        }
        n -= w;
        rotate(h, w);
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                ground[h - i][w - 1 - j] = tmp[i][j];
            }
        }
        h++;
    }
}


void moveFish() {
    int nextGround[MAX][MAX];
    int remain;
    int nx, ny;
    for (int i = 0; i < MAX; i++)
        fill(nextGround[i] , nextGround[i] + MAX, 0);
    
    for (int x = 0; x < MAX; x++) {
        for (int y = 0; y < MAX; y++) {
            if (ground[x][y] == 0) continue;
            remain = ground[x][y];
            for (int d = 0; d < 4; d++) {
                nx = x + dx[d];
                ny = y + dy[d];
                if (nx < 0 || ny < 0) continue;
                if (ground[nx][ny] == 0) continue;
                int diff = (ground[x][y] - ground[nx][ny]) / 5;
                if (diff > 0) {
                    remain -= diff;
                    nextGround[nx][ny] += diff;
                }
            }
            nextGround[x][y] += remain;
        }
    }
    for (int i = 0; i < MAX; i++)
        fill(ground[i], ground[i] + MAX, 0);
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            ground[i][j] = nextGround[i][j];
        }
    }
}

void flatten() {
    pot.clear();
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (ground[j][i] > 0) {
                pot.push_back(ground[j][i]);
            }
        }
    }
}

void roll2() {
    int w, h;
    int nw, nh;
    int left[MAX][MAX];
    for (int i = 0; i < MAX; i++) {
        fill(left[i], left[i] + MAX, 0);
    }
    for (int i = 0; i < MAX; i++)
        fill(ground[i], ground[i] + MAX, 0);
    for (int i = 0; i < pot.size(); i++) {
            ground[0][i] = pot[i];
    }
    h = 1;
    w = pot.size() / 2;
    for (int cmd = 0; cmd < 2; cmd++) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                left[i][j] = ground[i][j];
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                ground[i][j] = ground[i][j + w];
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                ground[i][j + w] = 0;
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                ground[i + h][j] = left[h - 1 - i][w - 1 - j];
            }
        }
        h *= 2;
        w /= 2;
    }   
}

int getDiff() {
    int potMin = 0x3f3f3f3f;
    int potMax = 0;

    for (int i = 0; i < pot.size(); i++) {
        potMin = min(potMin, pot[i]);
        potMax = max(potMax, pot[i]);
    }
    return potMax - potMin;
}

void printPot() {
    for (int i = 0; i < pot.size(); i++) {
        cout << pot[i] << ' ';
    }
    cout << '\n';
}

void printGround() {
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < 10; j++) {
            cout << ground[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> K;
    pot.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> pot[i];
    }
    // if (getDiff() <= K) {
    //     cout << 0 << '\n';
    //     return 0;
    // }
    int count = 1;
    while (1) {
        addFish();
        roll1();
        moveFish();
        flatten();
        roll2();
        moveFish();
        flatten();
        if (getDiff() <= K)
            break;
        count++;
    }
    cout << count << '\n';
    return 0;
}

// 1 2 3 4 5 6 8 9 10 11 12

// 6 5 4 3 2 1
// 7 8 9 10 11 12

