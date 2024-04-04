#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100005;
typedef struct FLOWER{
    int sm;
    int sd;
    int em;
    int ed;

} Flower;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


bool flowerCmp(Flower a, Flower b) {
    if (a.sm == b.sm) {
        if (a.sd == b.sd) {
            if (a.em == b.em) {
                return a.ed > b.ed;
            }
            return a.em > b.em;
        }
        return a.sd < b.sd;
    }
    return a.sm < b.sm;
}

bool candiCmp(Flower a, Flower b) {
    if (a.em == b.em) {
        return a.ed > b.ed;
    }
    return a.em > b.em;
}

int N;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    vector<Flower> flowers;
    int cm, cd;
    int cnt = 0;
    cm = 3;
    cd = 1;

    cin >> N;

    for (int i = 0; i < N; i++) {
        Flower input;
        cin >> input.sm >> input.sd >> input.em >> input.ed;
        flowers.push_back(input);
    }
    sort(flowers.begin(), flowers.end(), flowerCmp);
    while (1) {
        vector<Flower> candi;
        for (int i = 0; i < N; i++) {
            if (flowers[i].sm > cm)
                break;
            if (flowers[i].sm == cm && flowers[i].sd > cd)
                break;
            if (flowers[i].em < cm)
                continue;
            if (flowers[i].em == cm && flowers[i].ed <= cd)
                continue;
            candi.push_back(flowers[i]);
        }
        if (candi.empty()) {
            cnt = 0;
            break;
        }
        sort(candi.begin(), candi.end(), candiCmp);
        cm = candi[0].em;
        cd = candi[0].ed;
        cnt++;
        if (cm >= 12) break;
    }
    if (cm <= 11) {
        cout << "0\n";
    } else {
        cout << cnt << '\n';
    }
    return 0;
}