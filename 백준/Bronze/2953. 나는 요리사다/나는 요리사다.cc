#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	int maxScore = 0;
	int n = 0;
	int person = 0;
	int total;

	for (int i = 1; i <= 5; i++) {
		total = 0;
		for (int j = 0; j < 4; j++) {
			cin >> n;
			total += n;
		}
		if (total > maxScore) {
			person = i;
			maxScore = total;
		}
	}
	cout << person << ' ' << maxScore << '\n';
	return 0;
}