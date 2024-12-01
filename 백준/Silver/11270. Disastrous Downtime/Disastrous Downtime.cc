#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	
	queue<int> q;

	cin >> n >> k;

	int timeStamp;
	int maxReq = 0;
	for (int i = 0; i < n; i++) {
		cin >> timeStamp;
		while (!q.empty() && q.front() <= timeStamp - 1000)
			q.pop();

		q.push(timeStamp);
		maxReq = max(maxReq, (int)q.size());
	}

	int numServer = maxReq / k;

	if (maxReq % k != 0) {
		numServer += 1;
	}

	cout << numServer << '\n';

	return 0;
}