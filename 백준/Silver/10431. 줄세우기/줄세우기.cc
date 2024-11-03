#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int P;
	int T;

	cin >> P;

	for (int test_case = 1; test_case <= P; test_case++) {
		cin >> T;
		vector<int> h(20);
		vector<int> v(20);
		for (int i = 0; i < 20; i++) {
			cin >> h[i];
		}
		v[0] = h[0];

		int answer = 0;
		for (int i = 1; i < 20; i++) {
			bool inserted = false;
			for (int j = 0; j < i; j++) {
				if (v[j] > h[i]) {
					inserted = true;
					for (int k = i; k > j; k--) {
						v[k] = v[k - 1]; 
						answer++;
					}
					v[j] = h[i];
					break;
				}
			}
			if (!inserted) {
				v[i] = h[i];
			}
		}
		cout << test_case << ' ' << answer << '\n';
	}

	return 0;
}