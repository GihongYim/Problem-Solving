#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> score(n);
	vector<int> trick(5);
	int a, b;
	int maxScore = 0;

	for (int i = 0; i < n; i++){
		cin >> a >> b;
		for (int j = 0; j < 5; j++) {
			cin >> trick[j];
		}
		sort(trick.rbegin(), trick.rend());
		score[i] = max(a, b) + trick[0] + trick[1];
		maxScore = max(maxScore, score[i]);
	}

	cout << maxScore << '\n';

	return 0;
}