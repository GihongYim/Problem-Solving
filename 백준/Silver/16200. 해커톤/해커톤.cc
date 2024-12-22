#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N;

	vector<int> x(N);

	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}

	sort(x.begin(), x.end());

	int team = 0;
	int numOfmember = 1;
	int totalOfMember = x[0];

	for (int i = 1; i < N; i++) {
		if (numOfmember == totalOfMember) {
			team++;
			numOfmember = 0;
			totalOfMember = x[i];
		}
		numOfmember++;
	}
	team++;
	cout << team << '\n';
	return 0;
}