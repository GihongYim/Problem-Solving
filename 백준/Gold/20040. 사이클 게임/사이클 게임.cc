#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define MAX 500001

int n, m;
int parent[MAX];


int getParent(int a) {
    while (parent[a] >= 0) {
        a = parent[a];
    }
    return a;
    // if (parent[a] < 0) {
    //     return a;
    // } 
    // else {
    //     return getParent(parent[a]);
    // }
}

void connect(int a, int b) {
    int parentA = getParent(a);
    int parentB = getParent(b);

    if (parent[parentA] > parent[parentB]) {
        int tmp = parentA;
        parentA = parentB;
        parentB = tmp;
    }
    parent[parentA] += parent[parentB];
    parent[parentB] = parentA;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    fill(parent, parent + n, -1);
    int result = 0;
    int a, b;
    for (int test = 1; test <= m; test++) {
        cin >> a >> b;
        
        if (getParent(a) == getParent(b)) {
            result = test;
            break;
        }
        connect(a, b);
    }
    cout << result << '\n';
    return 0;
}