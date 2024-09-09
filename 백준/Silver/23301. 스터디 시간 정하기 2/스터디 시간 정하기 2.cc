#include <bits/stdc++.h>
using namespace std;

int numOfPerson[5005];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, t;

	cin >> n >> t;

	fill(numOfPerson, numOfPerson + 5001, 0);
	for (int p = 0; p < n; p++)
	{
		int k;

		cin >> k;
		int s, e;

		for (int i = 0; i < k; i++){
			cin >> s >> e;
			for (int clock = s; clock < e; clock++) {
				numOfPerson[clock]++;
			}
		}
	}
	int startTime = 0;
	int maxPerson = 0;
	for (int i = 0; i < t; i++) {
		maxPerson += numOfPerson[i];
	}
	int person = maxPerson;
	for (int i = 0; i + t < 1000; i++) {
		if (person > maxPerson) {
			startTime = i;
			maxPerson = person;
		}
		person -= numOfPerson[i];
		person += numOfPerson[i + t];
	}
	cout << startTime << ' ' << startTime + t << '\n';
	return 0;
}