#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX = 100005;

int N, M;
ll arr[MAX];
ll minTree[MAX * 4];
ll maxTree[MAX * 4];

ll getMin(int node, int left, int right, int start, int end) 
{
	if (left > end || right < start) {
		return LLONG_MAX;
	} else if (left <= start && end <= right) {
		return minTree[node];
	}

	int mid = (start + end) / 2;
	return min(getMin(2 * node, left, right, start, mid), getMin(2 * node + 1, left, right, mid + 1, end));
}

ll getMax(int node, int left, int right, int start, int end) 
{
	if (left > end || right < start) {
		return 0;
	} else if (left <= start && end <= right) {
		return maxTree[node];
	}

	int mid = (start + end) / 2;
	return max(getMax(2 * node, left, right, start, mid), getMax(2 * node + 1, left, right, mid + 1, end));
}


ll initMinTree(int node, int start, int end)
{
	if (start == end) {
		minTree[node] = arr[start];
		return minTree[node];
	}

	int mid = (start + end) / 2;

	ll leftMin = initMinTree(2 * node, start, mid);
	ll rightMin = initMinTree(2 * node + 1, mid + 1, end);
	minTree[node] = min(leftMin, rightMin);
	return minTree[node];
}

ll initMaxTree(int node, int start, int end)
{
	if (start == end) {
		maxTree[node] = arr[start];
		return maxTree[node];
	}

	int mid = (start + end) / 2;

	ll leftMax = initMaxTree(2 * node, start, mid);
	ll rightMax = initMaxTree(2 * node + 1, mid + 1, end);
	maxTree[node] = max(leftMax, rightMax);
	return maxTree[node];
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	
	initMinTree(1, 0, N - 1);
	initMaxTree(1, 0, N - 1);
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		cout << getMin(1, a - 1, b - 1, 0, N - 1) << ' ' << getMax(1, a - 1, b - 1, 0, N - 1) << '\n';
	}
	return 0;
}