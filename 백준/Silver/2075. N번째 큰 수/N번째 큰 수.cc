#include <bits/stdc++.h>
using namespace std;

int N;
stack<int> s[1501];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int num;

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> num;
			s[j].push(num);			
		}
	}

	priority_queue<pair<int, int>> pq;
	int temp;
	for (int i = 0; i < N; i++){
		temp = s[i].top();
		s[i].pop();
		pq.push(make_pair(temp, i));
	}

	pair<int, int> cur;
	int sIndex;

	for (int i = 0; i < N; i++) {
		cur = pq.top();
		pq.pop();
		sIndex = cur.second;
		if (s[sIndex].size() > 0) {
			temp = s[sIndex].top();
			s[sIndex].pop();
			pq.push(make_pair(temp, sIndex));
		}
	}
	cout << cur.first << '\n';

	return 0;
}