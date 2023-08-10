#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int P[1001];
	int maxP = 0;
	int currP = 0;

	cin >> N;
	cin >> P[0];
	currP = 0;
	for (int i = 1; i < N; i++) {
		cin >> P[i];
		if (P[i - 1] < P[i]) {
			currP += (P[i] - P[i - 1]);
			maxP = max(maxP, currP);
		} else {
			currP = 0;
		}
	}
	cout << maxP << '\n';
	return 0;
}