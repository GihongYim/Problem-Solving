#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int total = 0;
	priority_queue<pair<int, int> ,vector<pair<int, int> > > q;
	vector<int> v;
	int score;

	for (int i = 1; i <= 8; i++) {
		cin >> score;
		q.push(make_pair(score, i));
	}
	for (int i = 0; i < 5; i++){
		v.push_back(q.top().second);
		total += q.top().first;
		q.pop();
	}
	cout << total << '\n';
	sort(v.begin(), v.end());
	for (int i = 0; i < 5; i++) {
		cout << v[i] << ' ';
	}
	cout << '\n';
	return 0;
}