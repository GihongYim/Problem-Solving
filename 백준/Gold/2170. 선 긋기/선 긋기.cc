#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long
#define INF 0x3f3f3f3f
#define MAX 1000010
typedef struct LINE 
{
    int s, e;
} Line;

Line line[MAX];

bool Cmp(Line a, Line b) {
    if (a.s < b.s) return true;
    return false;
}

int Max(int a, int b) {
    return a > b ? a : b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll N;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> line[i].s >> line[i].e;
    }
    sort(line + 1, line + N + 1, Cmp);
    int answer = 0;
    int left = -INF;
    int right = -INF;

    for (int i = 1; i <= N; i++) {
        if (line[i].s <= right) right = Max(right, line[i].e);
        else {
            answer += right - left;
            left = line[i].s;
            right = line[i].e;
        }
    }
    answer += right - left;
    cout << answer << '\n';

    return 0;
}