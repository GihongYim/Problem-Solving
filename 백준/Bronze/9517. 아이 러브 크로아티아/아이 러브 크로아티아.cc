#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int K;

	cin >> K;

	int N;

	cin >> N;

	int totalElapse = 0;
	for (int i = 0; i < N; i++) {
		int elapse;
		string answer;

		cin >> elapse >> answer;
		totalElapse += elapse;
		if (totalElapse >= 210) {
			break;
		}
		if (answer == "T") {
			K++;
		}
		if (K == 9)
			K = 1;
	}
	cout << K << '\n';

	return 0;
}