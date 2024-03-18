 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, w, l;

	cin >> n >> w >> l;
	vector<int> truck(n);
	queue<int> q;

	for (int i = 0; i < n; i++) {
		cin >> truck[i];
	}
	int curr = 0;
	int currWeight = 0;
	int result = 0;
	while (curr < truck.size()) {
		if (q.size() == w) {
			currWeight -= q.front(); q.pop();
		}
		if (truck[curr] + currWeight <= l) {
			currWeight += truck[curr];
			q.push(truck[curr]);
			curr++;
		} else {
			q.push(0);
		}
		result++;
	}
	while (q.size() != w) {
		q.push(0);
	}
	while (!q.empty()) {
		q.pop();
		result++;
	}
	cout << result << '\n';

	return 0;
 }