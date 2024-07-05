#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, M;
	string vote;

	int problem = 0;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int score = 0;
		cin >> vote;

		for (int j = 0; j < vote.length(); j++) {
			if (vote[j] == 'O')
				score++;
		}
		if (2 * score > vote.length())
			problem++;
	}
	cout << problem << '\n';


	return 0;
}