#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;
	int N;

	cin >> N;
	for (int i = 0; i < N; i++) {
		vector<int> v(4);
		for (int j = 0; j < 4; j++) {
			cin >> v[j];
		}
		sort(v.begin(), v.end());
		if (v[0] == v[1] && v[1] == v[2] && v[2] == v[3])
			answer = max(answer, 50000 + v[0] * 5000);
		else if (v[0] == v[1] && v[1] == v[2])
			answer = max(answer, 10000 + v[0] * 1000);
		else if (v[1] == v[2] && v[2] == v[3])
			answer = max(answer, 10000 + v[3] * 1000);
		else if (v[0] == v[1] && v[2] == v[3])
			answer = max(answer, 2000 + v[0] * 500 + v[2] * 500);
		else if (v[0] == v[1])
			answer = max(answer, 1000 + v[0] * 100);
		else if (v[1] == v[2])
			answer = max(answer, 1000 + v[1] * 100);
		else if (v[2] == v[3])
			answer = max(answer, 1000 + v[2] * 100);
		else 
			answer = max(answer, v[3] * 100);
	}
	cout << answer << '\n';
	return 0;
}

