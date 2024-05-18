#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

const int MAX = 100005;

class Edge{
public:
    int a, b;
    long long weight;
    Edge(int a, int b, int weight) {
        this->a = a;
        this->b = b;
        this->weight = weight;
    }

    bool operator<(const Edge &edge) const {
        return this->weight < edge.weight;
    }
};

int N, M;
int parent[MAX];


int getParent(int node) {
    if (parent[node] == node) return node;
    return getParent(parent[node]);
}

void unionParent(int a, int b) {
    a = getParent(a);
    b = getParent(b);
    if (a < b) parent[b] = a;
    else parent[a] = b;
}

bool isCycle(int a, int b) {
    a = getParent(a);
    b = getParent(b);
    if (a == b) return true;
    else return false;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;

    vector<Edge> v;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(Edge(a, b, c));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i <= N; i++)
        parent[i] = i;

    long long sum = 0;
    long long maxEdge = -1;
    for (int i = 0; i < v.size(); i++) {
        if (!isCycle(v[i].a, v[i].b)) {
            sum += v[i].weight;
            unionParent(v[i].a, v[i].b);
            maxEdge = max(maxEdge, v[i].weight);
        }
    }
    cout << sum - maxEdge << '\n';
    return 0;
}