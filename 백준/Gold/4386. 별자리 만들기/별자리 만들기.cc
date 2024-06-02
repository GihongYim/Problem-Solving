#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;

#define dii pair<double, pair<int, int> >

const int MAX = 101;

int n;
pair<double, double> point[101];

int parent[MAX];

int getParent(int a) {
    while (parent[a] >= 0) {
        a = parent[a];
    }
    return a;
}

bool edgeConnect(int a, int b) {
    int aSize, bSize;
    int aPar = getParent(a);
    int bPar = getParent(b);
    if (aPar == bPar) return false;

    aSize = -parent[aPar];
    bSize = -parent[bPar];

    if (a < b) {
        int tmp = aPar;
        aPar = bPar;
        bPar = tmp;
    }

    parent[aPar] += parent[bPar];
    parent[bPar] = aPar;
    return true;
}



double norm2(const pair<double, double> a, const pair<double, double> b) {
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double total = 0.0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> point[i].first >> point[i].second;
    }

    for (int i = 0; i < n; i++) {
        parent[i] = -1;
    }

    priority_queue<dii, vector<dii>, greater<dii> > q;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            q.push(make_pair(norm2(point[i], point[j]), make_pair(i, j)));
        }
    }
    while (!q.empty()) {
        dii curr = q.top(); q.pop();

        if (edgeConnect(curr.second.first, curr.second.second)) {
            total += curr.first;
        }
    }
    cout << fixed;
    cout << setprecision(2);
    cout << total << '\n';
    return 0;
}