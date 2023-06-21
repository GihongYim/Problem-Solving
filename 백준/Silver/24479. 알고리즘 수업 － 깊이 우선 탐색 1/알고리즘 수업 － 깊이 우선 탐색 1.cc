#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> adj[100001];
int visited[100001];

int pos = 1;
void dfs(int node);


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, R;
	int a,b;
	int curr;
	cin >> N >> M >> R;
	fill(visited, visited + N + 1, 0);
	for (int i = 0; i < M; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 1; i <= N; i++)
		sort(adj[i].begin(), adj[i].end());
	visited[R] = 1;
	dfs(R);
	for (int i = 1; i <= N; i++)
		cout << visited[i] << '\n';
	return 0;
}

void dfs(int node)
{
	int next;

	visited[node] = pos++;
	for (int i = 0; i < adj[node].size(); i++){
		next = adj[node][i];
		if (visited[next] == 0){
			dfs(next);
		}
	}
}