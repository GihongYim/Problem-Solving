#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	int evoCnt = 0;
	int evoMax = -1;
	string evoMaxName = "";

	cin >> N;

	for (int poke = 0; poke < N; poke++) {
		string name;
		int k, m;

		cin >> name;
		cin >> k >> m;

		int cnt = 0;

		while (m >= k) {
			cnt++;
			m -= k;
			m += 2;
		}

		if (cnt > 0) {
			evoCnt += cnt;
		}


		if (cnt > evoMax) {
			evoMaxName = name;
			evoMax = cnt;
		}
	}

	cout << evoCnt << '\n';
	cout << evoMaxName << '\n';


	return 0;
}